/********************************************************************************
** Form generated from reading UI file 'HomePageWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGEWIDGET_H
#define UI_HOMEPAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_HomePageWidget
{
public:
    QLabel *biblioLabel;

    void setupUi(QDialog *HomePageWidget)
    {
        if (HomePageWidget->objectName().isEmpty())
            HomePageWidget->setObjectName(QString::fromUtf8("HomePageWidget"));
        HomePageWidget->resize(400, 300);
        biblioLabel = new QLabel(HomePageWidget);
        biblioLabel->setObjectName(QString::fromUtf8("biblioLabel"));
        biblioLabel->setGeometry(QRect(20, 10, 58, 16));

        retranslateUi(HomePageWidget);

        QMetaObject::connectSlotsByName(HomePageWidget);
    } // setupUi

    void retranslateUi(QDialog *HomePageWidget)
    {
        HomePageWidget->setWindowTitle(QApplication::translate("HomePageWidget", "HomePageWidget", nullptr));
        biblioLabel->setText(QApplication::translate("HomePageWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePageWidget: public Ui_HomePageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGEWIDGET_H
