/********************************************************************************
** Form generated from reading UI file 'address_book.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESS_BOOK_H
#define UI_ADDRESS_BOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "contactview.h"

QT_BEGIN_NAMESPACE

class Ui_Address_bookClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_7;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *contacts_search_edit;
    QPushButton *contacts_search_button;
    ContactView *contacts_listView;
    QPushButton *contacts_add_button;
    QWidget *info_widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *info_lable;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *name_label;
    QLineEdit *name_edit;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *nickname_lable;
    QLineEdit *nickname_edit;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *phone_lable;
    QLineEdit *phone_edit;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *work_lable;
    QLineEdit *work_edit;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *info_delete_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *info_edit_save_button;

    void setupUi(QMainWindow *Address_bookClass)
    {
        if (Address_bookClass->objectName().isEmpty())
            Address_bookClass->setObjectName("Address_bookClass");
        Address_bookClass->resize(600, 400);
        centralWidget = new QWidget(Address_bookClass);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout_7 = new QHBoxLayout(centralWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        widget = new QWidget(centralWidget);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 45));
        widget_3->setMaximumSize(QSize(16777215, 45));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(1, -1, 0, -1);
        contacts_search_edit = new QLineEdit(widget_3);
        contacts_search_edit->setObjectName("contacts_search_edit");
        contacts_search_edit->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(contacts_search_edit);

        contacts_search_button = new QPushButton(widget_3);
        contacts_search_button->setObjectName("contacts_search_button");
        contacts_search_button->setMaximumSize(QSize(55, 20));

        horizontalLayout->addWidget(contacts_search_button);


        verticalLayout->addWidget(widget_3);

        contacts_listView = new ContactView(widget);
        contacts_listView->setObjectName("contacts_listView");

        verticalLayout->addWidget(contacts_listView);

        contacts_add_button = new QPushButton(widget);
        contacts_add_button->setObjectName("contacts_add_button");
        contacts_add_button->setMaximumSize(QSize(55, 20));

        verticalLayout->addWidget(contacts_add_button, 0, Qt::AlignRight);


        horizontalLayout_7->addWidget(widget);

        info_widget = new QWidget(centralWidget);
        info_widget->setObjectName("info_widget");
        verticalLayout_2 = new QVBoxLayout(info_widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        info_lable = new QLabel(info_widget);
        info_lable->setObjectName("info_lable");
        info_lable->setMinimumSize(QSize(0, 45));
        info_lable->setMaximumSize(QSize(16777215, 45));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        info_lable->setFont(font);

        verticalLayout_2->addWidget(info_lable, 0, Qt::AlignHCenter);

        widget_4 = new QWidget(info_widget);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        name_label = new QLabel(widget_4);
        name_label->setObjectName("name_label");
        name_label->setMinimumSize(QSize(55, 0));
        name_label->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_3->addWidget(name_label);

        name_edit = new QLineEdit(widget_4);
        name_edit->setObjectName("name_edit");

        horizontalLayout_3->addWidget(name_edit);


        verticalLayout_2->addWidget(widget_4);

        widget_5 = new QWidget(info_widget);
        widget_5->setObjectName("widget_5");
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        nickname_lable = new QLabel(widget_5);
        nickname_lable->setObjectName("nickname_lable");
        nickname_lable->setMinimumSize(QSize(55, 0));
        nickname_lable->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_4->addWidget(nickname_lable);

        nickname_edit = new QLineEdit(widget_5);
        nickname_edit->setObjectName("nickname_edit");

        horizontalLayout_4->addWidget(nickname_edit);


        verticalLayout_2->addWidget(widget_5);

        widget_6 = new QWidget(info_widget);
        widget_6->setObjectName("widget_6");
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        phone_lable = new QLabel(widget_6);
        phone_lable->setObjectName("phone_lable");
        phone_lable->setMinimumSize(QSize(55, 0));
        phone_lable->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_5->addWidget(phone_lable);

        phone_edit = new QLineEdit(widget_6);
        phone_edit->setObjectName("phone_edit");

        horizontalLayout_5->addWidget(phone_edit);


        verticalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(info_widget);
        widget_7->setObjectName("widget_7");
        horizontalLayout_6 = new QHBoxLayout(widget_7);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        work_lable = new QLabel(widget_7);
        work_lable->setObjectName("work_lable");
        work_lable->setMinimumSize(QSize(55, 0));
        work_lable->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_6->addWidget(work_lable);

        work_edit = new QLineEdit(widget_7);
        work_edit->setObjectName("work_edit");

        horizontalLayout_6->addWidget(work_edit);


        verticalLayout_2->addWidget(widget_7);

        widget_8 = new QWidget(info_widget);
        widget_8->setObjectName("widget_8");
        horizontalLayout_2 = new QHBoxLayout(widget_8);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        info_delete_button = new QPushButton(widget_8);
        info_delete_button->setObjectName("info_delete_button");
        info_delete_button->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_2->addWidget(info_delete_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        info_edit_save_button = new QPushButton(widget_8);
        info_edit_save_button->setObjectName("info_edit_save_button");
        info_edit_save_button->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_2->addWidget(info_edit_save_button, 0, Qt::AlignRight);


        verticalLayout_2->addWidget(widget_8);


        horizontalLayout_7->addWidget(info_widget);

        Address_bookClass->setCentralWidget(centralWidget);

        retranslateUi(Address_bookClass);

        QMetaObject::connectSlotsByName(Address_bookClass);
    } // setupUi

    void retranslateUi(QMainWindow *Address_bookClass)
    {
        Address_bookClass->setWindowTitle(QCoreApplication::translate("Address_bookClass", "Address_book", nullptr));
        contacts_search_button->setText(QCoreApplication::translate("Address_bookClass", "Search", nullptr));
        contacts_add_button->setText(QCoreApplication::translate("Address_bookClass", "Add", nullptr));
        info_lable->setText(QCoreApplication::translate("Address_bookClass", "Contact Info", nullptr));
        name_label->setText(QCoreApplication::translate("Address_bookClass", "Name", nullptr));
        nickname_lable->setText(QCoreApplication::translate("Address_bookClass", "Nickname", nullptr));
        phone_lable->setText(QCoreApplication::translate("Address_bookClass", "Phone", nullptr));
        work_lable->setText(QCoreApplication::translate("Address_bookClass", "Work", nullptr));
        info_delete_button->setText(QCoreApplication::translate("Address_bookClass", "Delete", nullptr));
        info_edit_save_button->setText(QCoreApplication::translate("Address_bookClass", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Address_bookClass: public Ui_Address_bookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESS_BOOK_H
