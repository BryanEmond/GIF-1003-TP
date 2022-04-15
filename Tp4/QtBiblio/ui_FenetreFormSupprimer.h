/********************************************************************************
** Form generated from reading UI file 'FenetreFormSupprimer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREFORMSUPPRIMER_H
#define UI_FENETREFORMSUPPRIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FenetreFormSupprimer
{
public:
    QLabel *label;
    QPushButton *btnAnnuler;
    QPushButton *btnConfirmer;
    QLineEdit *Identifiant;

    void setupUi(QDialog *FenetreFormSupprimer)
    {
        if (FenetreFormSupprimer->objectName().isEmpty())
            FenetreFormSupprimer->setObjectName(QString::fromUtf8("FenetreFormSupprimer"));
        FenetreFormSupprimer->resize(400, 94);
        label = new QLabel(FenetreFormSupprimer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 200, 20));
        label->setAlignment(Qt::AlignCenter);
        btnAnnuler = new QPushButton(FenetreFormSupprimer);
        btnAnnuler->setObjectName(QString::fromUtf8("btnAnnuler"));
        btnAnnuler->setGeometry(QRect(60, 60, 90, 28));
        btnConfirmer = new QPushButton(FenetreFormSupprimer);
        btnConfirmer->setObjectName(QString::fromUtf8("btnConfirmer"));
        btnConfirmer->setGeometry(QRect(250, 60, 90, 28));
        Identifiant = new QLineEdit(FenetreFormSupprimer);
        Identifiant->setObjectName(QString::fromUtf8("Identifiant"));
        Identifiant->setGeometry(QRect(200, 7, 200, 28));
        QWidget::setTabOrder(Identifiant, btnAnnuler);
        QWidget::setTabOrder(btnAnnuler, btnConfirmer);

        retranslateUi(FenetreFormSupprimer);
        QObject::connect(btnAnnuler, SIGNAL(clicked()), FenetreFormSupprimer, SLOT(close()));
        QObject::connect(btnConfirmer, SIGNAL(clicked()), FenetreFormSupprimer, SLOT(supprimerValidation()));

        QMetaObject::connectSlotsByName(FenetreFormSupprimer);
    } // setupUi

    void retranslateUi(QDialog *FenetreFormSupprimer)
    {
        FenetreFormSupprimer->setWindowTitle(QApplication::translate("FenetreFormSupprimer", "FenetreFormSupprimer", nullptr));
        label->setText(QApplication::translate("FenetreFormSupprimer", "Identifiant", nullptr));
        btnAnnuler->setText(QApplication::translate("FenetreFormSupprimer", "Annuler", nullptr));
        btnConfirmer->setText(QApplication::translate("FenetreFormSupprimer", "Confirmer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetreFormSupprimer: public Ui_FenetreFormSupprimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREFORMSUPPRIMER_H
