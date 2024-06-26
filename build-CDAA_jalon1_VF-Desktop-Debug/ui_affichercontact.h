/********************************************************************************
** Form generated from reading UI file 'affichercontact.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFFICHERCONTACT_H
#define UI_AFFICHERCONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AfficherContact
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEditNom;
    QLabel *label_5;
    QLineEdit *lineEditPrenom;
    QLabel *label_7;
    QLineEdit *lineEditEntreprise;
    QLabel *label_6;
    QLineEdit *lineEditMail;
    QLabel *label_4;
    QLineEdit *lineEditTel;
    QLabel *label_3;
    QLineEdit *lineEditDC;
    QLabel *label_9;
    QLineEdit *lineEditDE;
    QPushButton *pushButtonPhoto;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QLabel *nbI;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLabel *nbT;
    QPushButton *pushButtonAnnuler;

    void setupUi(QWidget *AfficherContact)
    {
        if (AfficherContact->objectName().isEmpty())
            AfficherContact->setObjectName(QString::fromUtf8("AfficherContact"));
        AfficherContact->resize(419, 394);
        verticalLayout = new QVBoxLayout(AfficherContact);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AfficherContact);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Tinos"));
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(AfficherContact);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEditNom = new QLineEdit(AfficherContact);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditNom);

        label_5 = new QLabel(AfficherContact);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lineEditPrenom = new QLineEdit(AfficherContact);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));
        lineEditPrenom->setEnabled(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPrenom);

        label_7 = new QLabel(AfficherContact);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        lineEditEntreprise = new QLineEdit(AfficherContact);
        lineEditEntreprise->setObjectName(QString::fromUtf8("lineEditEntreprise"));
        lineEditEntreprise->setEnabled(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditEntreprise);

        label_6 = new QLabel(AfficherContact);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        lineEditMail = new QLineEdit(AfficherContact);
        lineEditMail->setObjectName(QString::fromUtf8("lineEditMail"));
        lineEditMail->setEnabled(true);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditMail);

        label_4 = new QLabel(AfficherContact);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        lineEditTel = new QLineEdit(AfficherContact);
        lineEditTel->setObjectName(QString::fromUtf8("lineEditTel"));
        lineEditTel->setEnabled(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditTel);

        label_3 = new QLabel(AfficherContact);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_3);

        lineEditDC = new QLineEdit(AfficherContact);
        lineEditDC->setObjectName(QString::fromUtf8("lineEditDC"));
        lineEditDC->setEnabled(true);

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEditDC);

        label_9 = new QLabel(AfficherContact);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_9);

        lineEditDE = new QLineEdit(AfficherContact);
        lineEditDE->setObjectName(QString::fromUtf8("lineEditDE"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEditDE);


        horizontalLayout_7->addLayout(formLayout);

        pushButtonPhoto = new QPushButton(AfficherContact);
        pushButtonPhoto->setObjectName(QString::fromUtf8("pushButtonPhoto"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonPhoto->sizePolicy().hasHeightForWidth());
        pushButtonPhoto->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(13);
        pushButtonPhoto->setFont(font1);
        pushButtonPhoto->setTabletTracking(false);

        horizontalLayout_7->addWidget(pushButtonPhoto);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_8 = new QLabel(AfficherContact);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);


        horizontalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        listWidget = new QListWidget(AfficherContact);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_3->addWidget(listWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_12 = new QLabel(AfficherContact);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_3->addWidget(label_12);

        nbI = new QLabel(AfficherContact);
        nbI->setObjectName(QString::fromUtf8("nbI"));

        horizontalLayout_3->addWidget(nbI);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10 = new QLabel(AfficherContact);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textEdit = new QTextEdit(AfficherContact);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_5->addWidget(textEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_14 = new QLabel(AfficherContact);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_4->addWidget(label_14);

        nbT = new QLabel(AfficherContact);
        nbT->setObjectName(QString::fromUtf8("nbT"));

        horizontalLayout_4->addWidget(nbT);


        verticalLayout_5->addLayout(horizontalLayout_4);


        horizontalLayout_2->addLayout(verticalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonAnnuler = new QPushButton(AfficherContact);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));

        verticalLayout->addWidget(pushButtonAnnuler);


        retranslateUi(AfficherContact);
        QObject::connect(pushButtonAnnuler, SIGNAL(clicked()), AfficherContact, SLOT(close()));

        QMetaObject::connectSlotsByName(AfficherContact);
    } // setupUi

    void retranslateUi(QWidget *AfficherContact)
    {
        AfficherContact->setWindowTitle(QCoreApplication::translate("AfficherContact", "AfficherContact", nullptr));
        label->setText(QCoreApplication::translate("AfficherContact", "Affichage du contact s\303\251lectionn\303\251", nullptr));
        label_2->setText(QCoreApplication::translate("AfficherContact", "Nom", nullptr));
        label_5->setText(QCoreApplication::translate("AfficherContact", "Pr\303\251nom", nullptr));
        label_7->setText(QCoreApplication::translate("AfficherContact", "Entreprise", nullptr));
        label_6->setText(QCoreApplication::translate("AfficherContact", "Mail", nullptr));
        label_4->setText(QCoreApplication::translate("AfficherContact", "T\303\251lephone", nullptr));
        label_3->setText(QCoreApplication::translate("AfficherContact", "Date de cr\303\251ation", nullptr));
        label_9->setText(QCoreApplication::translate("AfficherContact", "Date de modification", nullptr));
        pushButtonPhoto->setText(QString());
        label_8->setText(QCoreApplication::translate("AfficherContact", "Int\303\251ractions ", nullptr));
        label_12->setText(QCoreApplication::translate("AfficherContact", "Nombre d'int\303\251ractions :", nullptr));
        nbI->setText(QCoreApplication::translate("AfficherContact", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("AfficherContact", "T\303\242ches:", nullptr));
        label_14->setText(QCoreApplication::translate("AfficherContact", "Nombre de t\303\242ches :", nullptr));
        nbT->setText(QString());
        pushButtonAnnuler->setText(QCoreApplication::translate("AfficherContact", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AfficherContact: public Ui_AfficherContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHERCONTACT_H
