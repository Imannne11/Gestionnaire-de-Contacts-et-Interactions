/********************************************************************************
** Form generated from reading UI file 'formcontact.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCONTACT_H
#define UI_FORMCONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormContact
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButtonAfficher;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonGerer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonModifier;
    QPushButton *pushButtonAjouteInter;
    QPushButton *pushButtonSupprimer;
    QPushButton *pushButtonAnnuler;

    void setupUi(QWidget *FormContact)
    {
        if (FormContact->objectName().isEmpty())
            FormContact->setObjectName(QString::fromUtf8("FormContact"));
        FormContact->resize(400, 300);
        verticalLayout = new QVBoxLayout(FormContact);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(FormContact);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Tinos"));
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        label_2 = new QLabel(FormContact);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(13);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        pushButtonAfficher = new QPushButton(FormContact);
        pushButtonAfficher->setObjectName(QString::fromUtf8("pushButtonAfficher"));

        verticalLayout->addWidget(pushButtonAfficher);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonGerer = new QPushButton(FormContact);
        pushButtonGerer->setObjectName(QString::fromUtf8("pushButtonGerer"));

        horizontalLayout->addWidget(pushButtonGerer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButtonModifier = new QPushButton(FormContact);
        pushButtonModifier->setObjectName(QString::fromUtf8("pushButtonModifier"));
        pushButtonModifier->setEnabled(false);

        verticalLayout_2->addWidget(pushButtonModifier);

        pushButtonAjouteInter = new QPushButton(FormContact);
        pushButtonAjouteInter->setObjectName(QString::fromUtf8("pushButtonAjouteInter"));
        pushButtonAjouteInter->setEnabled(false);

        verticalLayout_2->addWidget(pushButtonAjouteInter);

        pushButtonSupprimer = new QPushButton(FormContact);
        pushButtonSupprimer->setObjectName(QString::fromUtf8("pushButtonSupprimer"));
        pushButtonSupprimer->setEnabled(false);

        verticalLayout_2->addWidget(pushButtonSupprimer);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonAnnuler = new QPushButton(FormContact);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));

        verticalLayout->addWidget(pushButtonAnnuler);


        retranslateUi(FormContact);
        QObject::connect(pushButtonAnnuler, SIGNAL(clicked()), FormContact, SLOT(close()));

        QMetaObject::connectSlotsByName(FormContact);
    } // setupUi

    void retranslateUi(QWidget *FormContact)
    {
        FormContact->setWindowTitle(QCoreApplication::translate("FormContact", "FormContact", nullptr));
        label->setText(QCoreApplication::translate("FormContact", "Gestion du contact s\303\251lectionn\303\251", nullptr));
        label_2->setText(QCoreApplication::translate("FormContact", "Vous souhaitez : ", nullptr));
        pushButtonAfficher->setText(QCoreApplication::translate("FormContact", "Afficher", nullptr));
        pushButtonGerer->setText(QCoreApplication::translate("FormContact", "G\303\251rer", nullptr));
        pushButtonModifier->setText(QCoreApplication::translate("FormContact", "Modifier", nullptr));
        pushButtonAjouteInter->setText(QCoreApplication::translate("FormContact", "Ajouter Int\303\251raction", nullptr));
        pushButtonSupprimer->setText(QCoreApplication::translate("FormContact", "Supprimer", nullptr));
        pushButtonAnnuler->setText(QCoreApplication::translate("FormContact", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormContact: public Ui_FormContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCONTACT_H
