/********************************************************************************
** Form generated from reading UI file 'formmodifcontact.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMODIFCONTACT_H
#define UI_FORMMODIFCONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormModifContact
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *lineEditNom;
    QLineEdit *lineEditPrenom;
    QLineEdit *lineEdit_Entr;
    QLineEdit *lineEdit_Mail;
    QLineEdit *lineEdit_Tel;
    QLabel *label_7;
    QPushButton *pushButtonParcourir;
    QLabel *label_8;
    QLineEdit *lineEdit_DateC;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_Enregistrer;

    void setupUi(QWidget *FormModifContact)
    {
        if (FormModifContact->objectName().isEmpty())
            FormModifContact->setObjectName(QString::fromUtf8("FormModifContact"));
        FormModifContact->resize(400, 308);
        verticalLayout = new QVBoxLayout(FormModifContact);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(FormModifContact);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Tinos"));
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(FormModifContact);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(13);
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_6 = new QLabel(FormModifContact);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        label_5 = new QLabel(FormModifContact);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        label_4 = new QLabel(FormModifContact);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_3 = new QLabel(FormModifContact);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        lineEditNom = new QLineEdit(FormModifContact);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditNom);

        lineEditPrenom = new QLineEdit(FormModifContact);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));
        lineEditPrenom->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPrenom);

        lineEdit_Entr = new QLineEdit(FormModifContact);
        lineEdit_Entr->setObjectName(QString::fromUtf8("lineEdit_Entr"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_Entr);

        lineEdit_Mail = new QLineEdit(FormModifContact);
        lineEdit_Mail->setObjectName(QString::fromUtf8("lineEdit_Mail"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_Mail);

        lineEdit_Tel = new QLineEdit(FormModifContact);
        lineEdit_Tel->setObjectName(QString::fromUtf8("lineEdit_Tel"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_Tel);

        label_7 = new QLabel(FormModifContact);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        pushButtonParcourir = new QPushButton(FormModifContact);
        pushButtonParcourir->setObjectName(QString::fromUtf8("pushButtonParcourir"));

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButtonParcourir);

        label_8 = new QLabel(FormModifContact);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        lineEdit_DateC = new QLineEdit(FormModifContact);
        lineEdit_DateC->setObjectName(QString::fromUtf8("lineEdit_DateC"));
        lineEdit_DateC->setEnabled(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_DateC);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(FormModifContact);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_Enregistrer = new QPushButton(FormModifContact);
        pushButton_Enregistrer->setObjectName(QString::fromUtf8("pushButton_Enregistrer"));

        horizontalLayout_2->addWidget(pushButton_Enregistrer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(FormModifContact);
        QObject::connect(pushButton, SIGNAL(clicked()), FormModifContact, SLOT(close()));

        QMetaObject::connectSlotsByName(FormModifContact);
    } // setupUi

    void retranslateUi(QWidget *FormModifContact)
    {
        FormModifContact->setWindowTitle(QCoreApplication::translate("FormModifContact", "ModifContact", nullptr));
        label->setText(QCoreApplication::translate("FormModifContact", "Saisissez vos modifications", nullptr));
        label_2->setText(QCoreApplication::translate("FormModifContact", "Nom", nullptr));
        label_6->setText(QCoreApplication::translate("FormModifContact", "Pr\303\251nom", nullptr));
        label_5->setText(QCoreApplication::translate("FormModifContact", "Entreprise", nullptr));
        label_4->setText(QCoreApplication::translate("FormModifContact", "Mail", nullptr));
        label_3->setText(QCoreApplication::translate("FormModifContact", "T\303\251lephone", nullptr));
        lineEditNom->setText(QCoreApplication::translate("FormModifContact", "exemple", nullptr));
        lineEditPrenom->setText(QCoreApplication::translate("FormModifContact", "exemple", nullptr));
        label_7->setText(QCoreApplication::translate("FormModifContact", "Photo", nullptr));
        pushButtonParcourir->setText(QCoreApplication::translate("FormModifContact", "Parcourir", nullptr));
        label_8->setText(QCoreApplication::translate("FormModifContact", "Date de cr\303\251ation", nullptr));
        lineEdit_DateC->setText(QCoreApplication::translate("FormModifContact", "exemple", nullptr));
        pushButton->setText(QCoreApplication::translate("FormModifContact", "Annuler", nullptr));
        pushButton_Enregistrer->setText(QCoreApplication::translate("FormModifContact", "Enregistrer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormModifContact: public Ui_FormModifContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFCONTACT_H
