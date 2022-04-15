/********************************************************************************
** Form generated from reading UI file 'FenetrePrincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREPRINCIPAL_H
#define UI_FENETREPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetrePrincipal
{
public:
    QAction *actionQuitter;
    QAction *actionJournal;
    QAction *actionOuvrage;
    QAction *actionSupprimerreference;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuOperations;
    QMenu *menuAjouter_Referenence;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FenetrePrincipal)
    {
        if (FenetrePrincipal->objectName().isEmpty())
            FenetrePrincipal->setObjectName(QString::fromUtf8("FenetrePrincipal"));
        FenetrePrincipal->resize(800, 600);
        actionQuitter = new QAction(FenetrePrincipal);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionJournal = new QAction(FenetrePrincipal);
        actionJournal->setObjectName(QString::fromUtf8("actionJournal"));
        actionOuvrage = new QAction(FenetrePrincipal);
        actionOuvrage->setObjectName(QString::fromUtf8("actionOuvrage"));
        actionSupprimerreference = new QAction(FenetrePrincipal);
        actionSupprimerreference->setObjectName(QString::fromUtf8("actionSupprimerreference"));
        centralwidget = new QWidget(FenetrePrincipal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 800, 550));
        textEdit->setReadOnly(true);
        FenetrePrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FenetrePrincipal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuOperations = new QMenu(menubar);
        menuOperations->setObjectName(QString::fromUtf8("menuOperations"));
        menuAjouter_Referenence = new QMenu(menuOperations);
        menuAjouter_Referenence->setObjectName(QString::fromUtf8("menuAjouter_Referenence"));
        FenetrePrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(FenetrePrincipal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FenetrePrincipal->setStatusBar(statusbar);

        menubar->addAction(menuOperations->menuAction());
        menuOperations->addAction(menuAjouter_Referenence->menuAction());
        menuOperations->addAction(actionSupprimerreference);
        menuOperations->addAction(actionQuitter);
        menuAjouter_Referenence->addAction(actionJournal);
        menuAjouter_Referenence->addAction(actionOuvrage);

        retranslateUi(FenetrePrincipal);
        QObject::connect(actionQuitter, SIGNAL(triggered()), FenetrePrincipal, SLOT(close()));
        QObject::connect(actionJournal, SIGNAL(triggered()), FenetrePrincipal, SLOT(formJournal()));
        QObject::connect(actionOuvrage, SIGNAL(triggered()), FenetrePrincipal, SLOT(formOuvrage()));
        QObject::connect(actionSupprimerreference, SIGNAL(triggered()), FenetrePrincipal, SLOT(formSupprimerReference()));

        QMetaObject::connectSlotsByName(FenetrePrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *FenetrePrincipal)
    {
        FenetrePrincipal->setWindowTitle(QApplication::translate("FenetrePrincipal", "FenetrePrincipal", nullptr));
        actionQuitter->setText(QApplication::translate("FenetrePrincipal", "Quitter", nullptr));
        actionJournal->setText(QApplication::translate("FenetrePrincipal", "Journal", nullptr));
        actionOuvrage->setText(QApplication::translate("FenetrePrincipal", "Ouvrage", nullptr));
        actionSupprimerreference->setText(QApplication::translate("FenetrePrincipal", "Supprimer reference", nullptr));
        menuOperations->setTitle(QApplication::translate("FenetrePrincipal", "Operations", nullptr));
        menuAjouter_Referenence->setTitle(QApplication::translate("FenetrePrincipal", "Ajouter Referenence", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetrePrincipal: public Ui_FenetrePrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPAL_H
