/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAjouter_contact;
    QAction *actionQuitter;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QRadioButton *radioButtonNom;
    QRadioButton *radioButtonEntr;
    QLineEdit *lineEditNomEntr;
    QRadioButton *radioButtonDate;
    QDateEdit *dateEdit;
    QRadioButton *radioButton2Dates;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *dateEditdebut;
    QDateEdit *dateEditfin;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLabel *NBRapreRech;
    QLabel *label_4;
    QLabel *label_NBC;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(814, 433);
        MainWindow->setLayoutDirection(Qt::RightToLeft);
        actionAjouter_contact = new QAction(MainWindow);
        actionAjouter_contact->setObjectName(QString::fromUtf8("actionAjouter_contact"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/icones/ajoutericone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAjouter_contact->setIcon(icon);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/icones/quittericone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitter->setIcon(icon1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Tinos"));
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(13);
        label_2->setFont(font1);

        verticalLayout_4->addWidget(label_2);

        radioButtonNom = new QRadioButton(centralwidget);
        radioButtonNom->setObjectName(QString::fromUtf8("radioButtonNom"));
        radioButtonNom->setFont(font1);

        verticalLayout_4->addWidget(radioButtonNom);

        radioButtonEntr = new QRadioButton(centralwidget);
        radioButtonEntr->setObjectName(QString::fromUtf8("radioButtonEntr"));
        radioButtonEntr->setFont(font1);

        verticalLayout_4->addWidget(radioButtonEntr);

        lineEditNomEntr = new QLineEdit(centralwidget);
        lineEditNomEntr->setObjectName(QString::fromUtf8("lineEditNomEntr"));
        lineEditNomEntr->setEnabled(false);

        verticalLayout_4->addWidget(lineEditNomEntr);

        radioButtonDate = new QRadioButton(centralwidget);
        radioButtonDate->setObjectName(QString::fromUtf8("radioButtonDate"));
        radioButtonDate->setFont(font1);

        verticalLayout_4->addWidget(radioButtonDate);

        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setEnabled(false);

        verticalLayout_4->addWidget(dateEdit);

        radioButton2Dates = new QRadioButton(centralwidget);
        radioButton2Dates->setObjectName(QString::fromUtf8("radioButton2Dates"));
        radioButton2Dates->setFont(font1);

        verticalLayout_4->addWidget(radioButton2Dates);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dateEditdebut = new QDateEdit(centralwidget);
        dateEditdebut->setObjectName(QString::fromUtf8("dateEditdebut"));
        dateEditdebut->setEnabled(false);

        horizontalLayout_2->addWidget(dateEditdebut);

        dateEditfin = new QDateEdit(centralwidget);
        dateEditfin->setObjectName(QString::fromUtf8("dateEditfin"));
        dateEditfin->setEnabled(false);

        horizontalLayout_2->addWidget(dateEditfin);


        verticalLayout_4->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout_4);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        NBRapreRech = new QLabel(centralwidget);
        NBRapreRech->setObjectName(QString::fromUtf8("NBRapreRech"));

        horizontalLayout_3->addWidget(NBRapreRech);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        label_NBC = new QLabel(centralwidget);
        label_NBC->setObjectName(QString::fromUtf8("label_NBC"));

        horizontalLayout_3->addWidget(label_NBC);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setAutoFillBackground(false);
        toolBar->setOrientation(Qt::Horizontal);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionQuitter);
        toolBar->addAction(actionAjouter_contact);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionAjouter_contact->setText(QCoreApplication::translate("MainWindow", "Ajouter contact", nullptr));
        actionQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "S\303\251lection du contact", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Affiner la recherche selon : ", nullptr));
        radioButtonNom->setText(QCoreApplication::translate("MainWindow", "Nom", nullptr));
        radioButtonEntr->setText(QCoreApplication::translate("MainWindow", "Entreprise", nullptr));
        radioButtonDate->setText(QCoreApplication::translate("MainWindow", "Date de cr\303\251ation", nullptr));
        radioButton2Dates->setText(QCoreApplication::translate("MainWindow", "Intervalle de dates ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Appliquer", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
        label_3->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Nombre de contacts : ", nullptr));
        NBRapreRech->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "sur", nullptr));
        label_NBC->setText(QCoreApplication::translate("MainWindow", "ex.nbr", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
