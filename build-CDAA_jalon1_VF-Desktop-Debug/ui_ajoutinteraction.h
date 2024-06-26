/********************************************************************************
** Form generated from reading UI file 'ajoutinteraction.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTINTERACTION_H
#define UI_AJOUTINTERACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjoutInteraction
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditInteractionTexte;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QTextEdit *textEditContenu;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_AnnulerC;
    QPushButton *pushButton_CONTENU;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_6;

    void setupUi(QWidget *AjoutInteraction)
    {
        if (AjoutInteraction->objectName().isEmpty())
            AjoutInteraction->setObjectName(QString::fromUtf8("AjoutInteraction"));
        AjoutInteraction->resize(400, 381);
        verticalLayout = new QVBoxLayout(AjoutInteraction);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AjoutInteraction);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Tinos"));
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        label_2 = new QLabel(AjoutInteraction);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(13);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        lineEditInteractionTexte = new QLineEdit(AjoutInteraction);
        lineEditInteractionTexte->setObjectName(QString::fromUtf8("lineEditInteractionTexte"));

        verticalLayout->addWidget(lineEditInteractionTexte);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(AjoutInteraction);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(AjoutInteraction);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(AjoutInteraction);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(AjoutInteraction);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        textEditContenu = new QTextEdit(AjoutInteraction);
        textEditContenu->setObjectName(QString::fromUtf8("textEditContenu"));
        textEditContenu->setEnabled(false);

        horizontalLayout_2->addWidget(textEditContenu);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(AjoutInteraction);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        dateEdit = new QDateEdit(AjoutInteraction);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setEnabled(false);

        horizontalLayout_3->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_AnnulerC = new QPushButton(AjoutInteraction);
        pushButton_AnnulerC->setObjectName(QString::fromUtf8("pushButton_AnnulerC"));
        pushButton_AnnulerC->setEnabled(false);

        horizontalLayout_4->addWidget(pushButton_AnnulerC);

        pushButton_CONTENU = new QPushButton(AjoutInteraction);
        pushButton_CONTENU->setObjectName(QString::fromUtf8("pushButton_CONTENU"));
        pushButton_CONTENU->setEnabled(false);

        horizontalLayout_4->addWidget(pushButton_CONTENU);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton_5 = new QPushButton(AjoutInteraction);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_6 = new QPushButton(AjoutInteraction);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_5->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(AjoutInteraction);
        QObject::connect(pushButton_6, SIGNAL(clicked()), AjoutInteraction, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), lineEditInteractionTexte, SLOT(clear()));
        QObject::connect(pushButton_AnnulerC, SIGNAL(clicked()), textEditContenu, SLOT(clear()));

        QMetaObject::connectSlotsByName(AjoutInteraction);
    } // setupUi

    void retranslateUi(QWidget *AjoutInteraction)
    {
        AjoutInteraction->setWindowTitle(QCoreApplication::translate("AjoutInteraction", "Form", nullptr));
        label->setText(QCoreApplication::translate("AjoutInteraction", "G\303\251rer les interactions ", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutInteraction", "Ajouter int\303\251raction :", nullptr));
        pushButton->setText(QCoreApplication::translate("AjoutInteraction", "Annuler", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AjoutInteraction", "Enregistrer ", nullptr));
        label_3->setText(QCoreApplication::translate("AjoutInteraction", "Ajouter une t\303\242che \303\240 cette int\303\251raction :", nullptr));
        label_4->setText(QCoreApplication::translate("AjoutInteraction", "Contenu : ", nullptr));
        label_5->setText(QCoreApplication::translate("AjoutInteraction", "Date de la t\303\242che: ", nullptr));
        pushButton_AnnulerC->setText(QCoreApplication::translate("AjoutInteraction", "Annuler", nullptr));
        pushButton_CONTENU->setText(QCoreApplication::translate("AjoutInteraction", "Enregistrer", nullptr));
        pushButton_5->setText(QCoreApplication::translate("AjoutInteraction", "Nouvelle int\303\251raction ", nullptr));
        pushButton_6->setText(QCoreApplication::translate("AjoutInteraction", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutInteraction: public Ui_AjoutInteraction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTINTERACTION_H
