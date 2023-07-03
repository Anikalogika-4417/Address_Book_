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
                for (int i = 0; i < rootObject.size();i++){
                    QJsonObject jsonObject = rootObject.value(rootObject.keys().at(i)).toObject();
                    auto a = jsonObject.value("name").toString();

                    contactItemPtr contact{ new ContactItem(
                        rootObject.value(jsonObject.keys().at(0)).toString(),
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

contactItemPtr Helper::DeleteFile(const QString&)
{
	return contactItemPtr();
}
