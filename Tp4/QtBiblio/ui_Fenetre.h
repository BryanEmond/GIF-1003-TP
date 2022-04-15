/********************************************************************************
** Form generated from reading UI file 'Fenetre.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRE_H
#define UI_FENETRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Fenetre
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Fenetre)
    {
        if (Fenetre->objectName().isEmpty())
            Fenetre->setObjectName(QString::fromUtf8("Fenetre"));
        Fenetre->resize(400, 300);
        buttonBox = new QDialogButtonBox(Fenetre);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        retranslateUi(Fenetre);
        QObject::connect(buttonBox, SIGNAL(accepted()), Fenetre, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Fenetre, SLOT(reject()));

        QMetaObject::connectSlotsByName(Fenetre);
    } // setupUi

    void retranslateUi(QDialog *Fenetre)
    {
        Fenetre->setWindowTitle(QApplication::translate("Fenetre", "Fenetre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fenetre: public Ui_Fenetre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE_H
