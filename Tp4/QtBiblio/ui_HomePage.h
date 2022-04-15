/********************************************************************************
** Form generated from reading UI file 'HomePage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QWidget *centralwidget;
    QLabel *biblioLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *AddJournal;
    QPushButton *AddJournal_2;
    QPushButton *AddJournal_4;
    QPushButton *btnQuiter;

    void setupUi(QMainWindow *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName(QString::fromUtf8("HomePage"));
        HomePage->resize(800, 600);
        centralwidget = new QWidget(HomePage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        biblioLabel = new QLabel(centralwidget);
        biblioLabel->setObjectName(QString::fromUtf8("biblioLabel"));
        biblioLabel->setGeometry(QRect(0, 10, 581, 61));
        biblioLabel->setFrameShape(QFrame::Box);
        biblioLabel->setTextFormat(Qt::AutoText);
        biblioLabel->setAlignment(Qt::AlignCenter);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 70, 581, 511));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 579, 509));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 1, 581, 511));
        scrollArea->setWidget(scrollAreaWidgetContents);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(600, 80, 184, 161));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        AddJournal = new QPushButton(verticalLayoutWidget);
        AddJournal->setObjectName(QString::fromUtf8("AddJournal"));

        verticalLayout->addWidget(AddJournal);

        AddJournal_2 = new QPushButton(verticalLayoutWidget);
        AddJournal_2->setObjectName(QString::fromUtf8("AddJournal_2"));

        verticalLayout->addWidget(AddJournal_2);

        AddJournal_4 = new QPushButton(verticalLayoutWidget);
        AddJournal_4->setObjectName(QString::fromUtf8("AddJournal_4"));

        verticalLayout->addWidget(AddJournal_4);

        btnQuiter = new QPushButton(centralwidget);
        btnQuiter->setObjectName(QString::fromUtf8("btnQuiter"));
        btnQuiter->setGeometry(QRect(610, 550, 182, 28));
        HomePage->setCentralWidget(centralwidget);

        retranslateUi(HomePage);
        QObject::connect(btnQuiter, SIGNAL(clicked()), HomePage, SLOT(btnQuitter()));

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QMainWindow *HomePage)
    {
        HomePage->setWindowTitle(QApplication::translate("HomePage", "HomePage", nullptr));
        biblioLabel->setText(QApplication::translate("HomePage", "TextLabel", nullptr));
        AddJournal->setText(QApplication::translate("HomePage", "Ajouter Journal", nullptr));
        AddJournal_2->setText(QApplication::translate("HomePage", "Ajouter Ouvrage", nullptr));
        AddJournal_4->setText(QApplication::translate("HomePage", "Supprimer une reference", nullptr));
        btnQuiter->setText(QApplication::translate("HomePage", "Quiter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
