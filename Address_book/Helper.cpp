#include "Helper.h"

Helper::Helper() : 
	file(QCoreApplication::applicationDirPath() + "/book.json")
{
}

QSharedPointer<Helper> Helper::helpPtr = nullptr;
contactListPtr Helper::data = nullptr;


QSharedPointer<Helper> Helper::instance()
{
    if (helpPtr.isNull())
    {
        helpPtr.reset(new Helper);
    }
    return helpPtr;
}


void Helper::AddLine(const contactItemPtr new_contact_)
{

    QJsonObject jsonObject;
    //jsonObject["id"] = new_contact_->getContactId();
    jsonObject["name"] = new_contact_->getContactName();
    jsonObject["nickname"] = new_contact_->getContactNickname();
    jsonObject["phone"] = new_contact_->getContactPhone();
    jsonObject["work"] = new_contact_->getContactWork();

    if (!new_contact_->getContactId().isEmpty() && !new_contact_->getContactName().isEmpty() && !new_contact_->getContactPhone().isEmpty()) {

        if (file.open(QIODevice::ReadWrite | QIODevice::Text))
        {
            QByteArray fileData = file.readAll();

            QJsonDocument existingJsonDocument = QJsonDocument::fromJson(fileData);

            if (!existingJsonDocument.isNull() && existingJsonDocument.isObject()) {
                QJsonObject existingJsonObject = existingJsonDocument.object();
                existingJsonObject[new_contact_->getContactId()] = jsonObject;
                QJsonDocument updatedJsonDocument(existingJsonObject);
                file.seek(0);
                file.write(updatedJsonDocument.toJson());
            }
            else
            {
                file.seek(0);
                QJsonObject newJsonObject;
                newJsonObject[new_contact_->getContactId()] = jsonObject;
                QJsonDocument jsonDocument(newJsonObject);
                file.write(jsonDocument.toJson());
            }
            file.close();
            emit ContactAdded(new_contact_);
            return;
        }
        else
        {
            emit FileEroor("Failed to create or update data");
            return;
        }
    }
    else {
        emit FileEroor("Not all fileds filled!!!");
        return;
    }
}

void Helper::DownloadLines()
{
    if (file.open(QIODevice::ReadOnly))
    {
        QByteArray jsonData = file.readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
        if (!jsonDoc.isNull())
        {
            if (jsonDoc.isObject())
            {
                QJsonObject rootObject = jsonDoc.object();
                auto b = rootObject.size();
                for (int i = 0; i < rootObject.size();i++) {
                    QJsonObject jsonObject = rootObject.value(rootObject.keys().at(i)).toObject();

                    auto key = rootObject.keys().at(i);
                    contactItemPtr contact{ new ContactItem(
                        key,
                        jsonObject.value("name").toString(),
                        jsonObject.value("nickname").toString(),
                        jsonObject.value("phone").toString(),
                        jsonObject.value("work").toString()
                    ) };
                    list.push_back(contact);
                }
            }
            else
            {
                emit FileEroor("No data (JSON)");
                return;
            }
        }
        else
        {
            emit FileEroor("Mistake!\nTry it later...");
            return;
        }
        file.close();
    }
    else
    {
        emit FileEroor("Mistake!\nNo data");
        return;
    }
    
    data = QSharedPointer<contactList>::create(contactList(list));
    emit LinesUploaded(data);
    
}

contactItemPtr Helper::ReadLine(const QString&)
{
    return contactItemPtr();
}

void Helper::DeleteLine(const contactItemPtr delete_contact_)
{

    if (file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QByteArray jsonData = file.readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);

        if (!jsonDoc.isNull() && jsonDoc.isObject()) {
            QJsonObject rootObject = jsonDoc.object();
            for (int i = 0; i < rootObject.size(); i++) {
                if (rootObject.keys().at(i).trimmed() == delete_contact_->getContactId().trimmed()) {
                    rootObject.remove(rootObject.keys().at(i));
                    jsonDoc.setObject(rootObject);
                    
                    file.seek(0);
                    file.write(jsonDoc.toJson());
                    file.resize(file.pos());
                    file.close();
                    emit LineDeleted("Contact deleted successfuly");
                    return;
                }
            }
            file.close();
            emit FileEroor("No data for delete");
            return;
        }
        else
        {
            file.close();
            emit FileEroor("Nothing to delete");
            return;
        }
    }
    else
    {
        emit FileEroor("Failed to open data");
        return;
    }
}

void Helper::UpdateLine(const contactItemPtr update_contact_)
{
    if (file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        QByteArray jsonData = file.readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);

        if (!jsonDoc.isNull() && jsonDoc.isObject()) {
            QJsonObject rootObject = jsonDoc.object();
            QString updateContactId = update_contact_->getContactId().trimmed();

            // Check if the contact to update exists
            if (rootObject.contains(updateContactId) && rootObject.value(updateContactId).isObject()) {
                QJsonObject contactObject = rootObject.value(updateContactId).toObject();

                // Update the properties of the contact object
                contactObject["name"] = update_contact_->getContactName();
                contactObject["nickname"] = update_contact_->getContactNickname();
                contactObject["phone"] = update_contact_->getContactPhone();
                contactObject["work"] = update_contact_->getContactWork();

                // Replace the updated contact object within the root object
                rootObject[updateContactId] = contactObject;

                jsonDoc.setObject(rootObject);

                // Overwrite the file with the modified JSON document
                file.seek(0);
                file.write(jsonDoc.toJson());
                file.resize(file.pos());

                file.close();
                emit LineUpdated(update_contact_);
                return;
            }
            else {
                emit FileEroor("Contact does not exist");
                return;
            }
        }
        else {
            qDebug() << "Invalid JSON document or not an object";
        }

        file.close();
        emit FileEroor("Failed to update contact");
        return;
    }
    else {
        emit FileEroor("Failed to open data");
        return;
    }
}
