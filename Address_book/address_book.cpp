#include "address_book.h"

Address_book::Address_book(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Address_bookClass())
    , helper(Helper::instance())
    , current_contact(nullptr)
{
    ui->setupUi(this);
    //Before starting - no data on right side
    ui->info_widget->hide();


    //connections with view
    connect(this, &Address_book::showContact, ui->contacts_listView, &ContactView::onContactAdded);
    connect(this, &Address_book::showContacts, ui->contacts_listView, &ContactView::onContactsAdded);
    connect(this, &Address_book::delViewContact, ui->contacts_listView, &ContactView::onContactDeleted);
    connect(ui->contacts_listView, &ContactView::contactClicked, this, &Address_book::onContactClicked);

    //connections wuth button clicked
    connect(ui->contacts_add_button, &QPushButton::clicked, this, &Address_book::onAddButtonCliecked);
    connect(ui->info_edit_save_button, &QPushButton::clicked, this, &Address_book::onSaveEditButtonClicked);
    connect(ui->info_delete_button, &QPushButton::clicked, this, &Address_book::onDeleteButtonClicked);

    //connections with helper
    connect(this, &Address_book::newContact, helper.data(), &Helper::AddLine);
    connect(this, &Address_book::deleteLine, helper.data(), &Helper::DeleteLine);

    connect(helper.data(), &Helper::FileEroor, this, &Address_book::ContactAddedError);
    connect(helper.data(), &Helper::ContactAdded, this, &Address_book::ContactAdded);
    connect(helper.data(), &Helper::LinesUploaded, this, &Address_book::ContactsAdded);
    connect(helper.data(), &Helper::LineDeleted, this, &Address_book::ContactDeleteded);

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
    ui->info_delete_button->setEnabled(false);
    current_contact = nullptr;
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
        ui->info_delete_button->setEnabled(true);

    }
    else 
    {

    }

    
}

void Address_book::onDeleteButtonClicked()
{
    if (!current_contact.isNull())
        emit deleteLine(current_contact);
    else
        QMessageBox::warning(this, "Error", "No data for deelting");
}

void Address_book::onContactClicked(const contactItemPtr contact_data_ptr_)
{
    current_contact = contact_data_ptr_;
    ui->info_widget->show();

    ui->info_lable->setText(INFO_LABLE);

    ui->name_edit->setText(contact_data_ptr_->getContactName());
    ui->nickname_edit->setText(contact_data_ptr_->getContactNickname());
    ui->phone_edit->setText(contact_data_ptr_->getContactPhone());
    ui->work_edit->setText(contact_data_ptr_->getContactWork());

    ui->info_edit_save_button->setText(EDIT_BUTTON);

    ui->info_delete_button->setEnabled(true);
}

void Address_book::ContactAddedError(const QString& eroor_)
{
    QMessageBox::warning(this, "Warning", eroor_);
}

void Address_book::ContactAdded(const contactItemPtr new_contact_)
{
    current_contact = new_contact_;
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

void Address_book::ContactDeleteded(const QString& mess_) {
    emit delViewContact(QVariant::fromValue<contactItemPtr>(current_contact));
    ui->info_widget->hide();
    QMessageBox::information(this, "Success", mess_);
}


