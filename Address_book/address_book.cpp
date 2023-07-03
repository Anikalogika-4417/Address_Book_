#include "address_book.h"

Address_book::Address_book(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Address_bookClass())
    , helper(Helper::instance())
{
    ui->setupUi(this);
    //Before starting - no data on right side
    ui->info_widget->hide();


    //connections with view
    connect(this, &Address_book::showContact, ui->contacts_listView, &ContactView::onContactAdded);
    connect(this, &Address_book::showContacts, ui->contacts_listView, &ContactView::onContactsAdded);
    connect(ui->contacts_listView, &ContactView::contactClicked, this, &Address_book::onContactClicked);

    //connections wuth button clicked
    connect(ui->contacts_add_button, &QPushButton::clicked, this, &Address_book::onAddButtonCliecked);
    connect(ui->info_edit_save_button, &QPushButton::clicked, this, &Address_book::onSaveEditButtonClicked);

    //connections with helper
    connect(this, &Address_book::newContact, helper.data(), &Helper::AddLine);

    connect(helper.data(), &Helper::FileEroor, this, &Address_book::ContactAddedError);
    connect(helper.data(), &Helper::ContactAdded, this, &Address_book::ContactAdded);
    connect(helper.data(), &Helper::LinesUploaded, this, &Address_book::ContactsAdded);

    Helper::instance()->DownloadLines();
}

Address_book::~Address_book()
{
    delete ui;
}

void Address_book::onAddButtonCliecked()
{
    ui->info_widget->show();
    ui->name_edit->clear();
    ui->nickname_edit->clear();
    ui->phone_edit->clear();
    ui->work_edit->clear();
    ui->info_edit_save_button->setText(SAVE_BUTTON);
    ui->info_lable->setText(NEW_C_LABLE);
}

void Address_book::onSaveEditButtonClicked()
{
    if (ui->info_edit_save_button->text() == SAVE_BUTTON)
    {
        if (ui->name_edit->text().isEmpty() || ui->phone_edit->text().isEmpty()) {
            QMessageBox::warning(this, "Warning", "Please, fill filds name and phone");
            return;
        }

        emit newContact(contactItemPtr
            { new ContactItem
                {
                ui->name_edit->text(),
                ui->nickname_edit->text(),
                ui->phone_edit->text(),
                ui->work_edit->text()
                }
            }
        );
    }
    else 
    {

    }

    
}

void Address_book::onContactClicked(const contactItemPtr contact_data_ptr_)
{
    ui->info_widget->show();

    ui->info_lable->setText(INFO_LABLE);

    ui->name_edit->setText(contact_data_ptr_->getContactName());
    ui->nickname_edit->setText(contact_data_ptr_->getContactNickname());
    ui->phone_edit->setText(contact_data_ptr_->getContactPhone());
    ui->work_edit->setText(contact_data_ptr_->getContactWork());

    ui->info_edit_save_button->setText(EDIT_BUTTON);

}

void Address_book::ContactAddedError(const QString& eroor_)
{
    QMessageBox::warning(this, "Warning", eroor_);
}

void Address_book::ContactAdded(const contactItemPtr new_contact_)
{
    auto a = QVariant::fromValue<contactItemPtr>(new_contact_);
    emit showContact(QVariant::fromValue<contactItemPtr>(new_contact_));
    QMessageBox::information(this, "Success", "Contact created successfully!");
    ui->info_edit_save_button->setText(EDIT_BUTTON);
    ui->info_lable->setText(INFO_LABLE);
}

void Address_book::ContactsAdded(const contactListPtr all_contacts_)
{
    QVariantList var_list;
    for (const contactItemPtr contact_item : *all_contacts_) {
        auto a = contact_item->getContactName();
        var_list.emplaceBack(
            QVariant::fromValue<contactItemPtr>
            (contact_item)
        );
    }
    emit showContacts(var_list);
}


