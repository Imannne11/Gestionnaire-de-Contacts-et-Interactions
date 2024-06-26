/********************************************************************************
** Form generated from reading UI file 'ajoutcontact.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTCONTACT_H
#define UI_AJOUTCONTACT_H

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

class Ui_AjoutContact
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEditNOM;
    QLineEdit *lineEditPRENOM;
    QLineEdit *lineEditENTR;
    QLineEdit *lineEditMAIL;
    QLineEdit *lineEditTEL;
    QPushButton *pushButtonParcourir;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *AjoutContact)
    {
        if (AjoutContact->objectName().isEmpty())
            AjoutContact->setObjectName(QString::fromUtf8("AjoutContact"));
        AjoutContact->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AjoutContact->sizePolicy().hasHeightForWidth());
        AjoutContact->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AjoutContact);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AjoutContact);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Tinos"));
        font.setPointSize(20);
        label->setFont(font);
        label->setAutoFillBackground(false);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_2 = new QLabel(AjoutContact);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(AjoutContact);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(AjoutContact);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(AjoutContact);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(AjoutContact);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(AjoutContact);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        lineEditNOM = new QLineEdit(AjoutContact);
        lineEditNOM->setObjectName(QString::fromUtf8("lineEditNOM"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditNOM);

        lineEditPRENOM = new QLineEdit(AjoutContact);
        lineEditPRENOM->setObjectName(QString::fromUtf8("lineEditPRENOM"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEditPRENOM);

        lineEditENTR = new QLineEdit(AjoutContact);
        lineEditENTR->setObjectName(QString::fromUtf8("lineEditENTR"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEditENTR);

        lineEditMAIL = new QLineEdit(AjoutContact);
        lineEditMAIL->setObjectName(QString::fromUtf8("lineEditMAIL"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEditMAIL);

        lineEditTEL = new QLineEdit(AjoutContact);
        lineEditTEL->setObjectName(QString::fromUtf8("lineEditTEL"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEditTEL);

        pushButtonParcourir = new QPushButton(AjoutContact);
        pushButtonParcourir->setObjectName(QString::fromUtf8("pushButtonParcourir"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, pushButtonParcourir);


        verticalLayout->addLayout(formLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_2 = new QPushButton(AjoutContact);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font1;
        font1.setPointSize(13);
        pushButton_2->setFont(font1);

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(AjoutContact);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AjoutContact);

        QMetaObject::connectSlotsByName(AjoutContact);
    } // setupUi

    void retranslateUi(QWidget *AjoutContact)
    {
        AjoutContact->setWindowTitle(QCoreApplication::translate("AjoutContact", "AjoutContact", nullptr));
        label->setText(QCoreApplication::translate("AjoutContact", "Cr\303\251ez votre contact : ", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutContact", "Nom", nullptr));
        label_3->setText(QCoreApplication::translate("AjoutContact", "Photo", nullptr));
        label_4->setText(QCoreApplication::translate("AjoutContact", "T\303\251lephone", nullptr));
        label_5->setText(QCoreApplication::translate("AjoutContact", "Mail", nullptr));
        label_6->setText(QCoreApplication::translate("AjoutContact", "Entreprise", nullptr));
        label_7->setText(QCoreApplication::translate("AjoutContact", "Prenom", nullptr));
        pushButtonParcourir->setText(QCoreApplication::translate("AjoutContact", "Parcourir", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AjoutContact", "Annuler", nullptr));
        pushButton->setText(QCoreApplication::translate("AjoutContact", "Ajouter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutContact: public Ui_AjoutContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTCONTACT_H
