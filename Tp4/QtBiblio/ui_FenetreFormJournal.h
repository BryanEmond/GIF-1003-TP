/********************************************************************************
** Form generated from reading UI file 'FenetreFormJournal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREFORMJOURNAL_H
#define UI_FENETREFORMJOURNAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_FenetreFormJournal
{
public:
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *btnConfirmer;
    QPushButton *btnAnnuler;
    QLineEdit *Auteur;
    QLineEdit *Nom;
    QLineEdit *Identifiant;
    QLineEdit *Titre;
    QSpinBox *Annee;
    QSpinBox *Numero;
    QSpinBox *Volume;
    QSpinBox *Pages;

    void setupUi(QDialog *FenetreFormJournal)
    {
        if (FenetreFormJournal->objectName().isEmpty())
            FenetreFormJournal->setObjectName(QString::fromUtf8("FenetreFormJournal"));
        FenetreFormJournal->resize(400, 300);
        label_4 = new QLabel(FenetreFormJournal);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 10, 200, 20));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(FenetreFormJournal);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 40, 200, 20));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(FenetreFormJournal);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 70, 200, 20));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(FenetreFormJournal);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 100, 200, 20));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(FenetreFormJournal);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 130, 200, 20));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(FenetreFormJournal);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 160, 200, 20));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(FenetreFormJournal);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 190, 200, 20));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(FenetreFormJournal);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 220, 200, 20));
        label_11->setAlignment(Qt::AlignCenter);
        btnConfirmer = new QPushButton(FenetreFormJournal);
        btnConfirmer->setObjectName(QString::fromUtf8("btnConfirmer"));
        btnConfirmer->setGeometry(QRect(250, 250, 90, 28));
        btnAnnuler = new QPushButton(FenetreFormJournal);
        btnAnnuler->setObjectName(QString::fromUtf8("btnAnnuler"));
        btnAnnuler->setGeometry(QRect(60, 250, 90, 28));
        Auteur = new QLineEdit(FenetreFormJournal);
        Auteur->setObjectName(QString::fromUtf8("Auteur"));
        Auteur->setGeometry(QRect(200, 7, 200, 28));
        Nom = new QLineEdit(FenetreFormJournal);
        Nom->setObjectName(QString::fromUtf8("Nom"));
        Nom->setGeometry(QRect(200, 127, 200, 28));
        Identifiant = new QLineEdit(FenetreFormJournal);
        Identifiant->setObjectName(QString::fromUtf8("Identifiant"));
        Identifiant->setGeometry(QRect(200, 97, 200, 28));
        Titre = new QLineEdit(FenetreFormJournal);
        Titre->setObjectName(QString::fromUtf8("Titre"));
        Titre->setGeometry(QRect(200, 37, 200, 28));
        Annee = new QSpinBox(FenetreFormJournal);
        Annee->setObjectName(QString::fromUtf8("Annee"));
        Annee->setGeometry(QRect(200, 67, 200, 28));
        Numero = new QSpinBox(FenetreFormJournal);
        Numero->setObjectName(QString::fromUtf8("Numero"));
        Numero->setGeometry(QRect(200, 190, 200, 28));
        Volume = new QSpinBox(FenetreFormJournal);
        Volume->setObjectName(QString::fromUtf8("Volume"));
        Volume->setGeometry(QRect(200, 160, 200, 28));
        Pages = new QSpinBox(FenetreFormJournal);
        Pages->setObjectName(QString::fromUtf8("Pages"));
        Pages->setGeometry(QRect(200, 220, 200, 28));
        QWidget::setTabOrder(Auteur, Titre);
        QWidget::setTabOrder(Titre, Annee);
        QWidget::setTabOrder(Annee, Identifiant);
        QWidget::setTabOrder(Identifiant, Nom);
        QWidget::setTabOrder(Nom, Volume);
        QWidget::setTabOrder(Volume, Numero);
        QWidget::setTabOrder(Numero, Pages);
        QWidget::setTabOrder(Pages, btnAnnuler);
        QWidget::setTabOrder(btnAnnuler, btnConfirmer);

        retranslateUi(FenetreFormJournal);
        QObject::connect(btnAnnuler, SIGNAL(clicked()), FenetreFormJournal, SLOT(close()));
        QObject::connect(btnConfirmer, SIGNAL(clicked()), FenetreFormJournal, SLOT(journalValidation()));

        QMetaObject::connectSlotsByName(FenetreFormJournal);
    } // setupUi

    void retranslateUi(QDialog *FenetreFormJournal)
    {
        FenetreFormJournal->setWindowTitle(QApplication::translate("FenetreFormJournal", "FenetreFormJournal", nullptr));
        label_4->setText(QApplication::translate("FenetreFormJournal", "Auteur", nullptr));
        label_5->setText(QApplication::translate("FenetreFormJournal", "Titre", nullptr));
        label_6->setText(QApplication::translate("FenetreFormJournal", "Annee", nullptr));
        label_7->setText(QApplication::translate("FenetreFormJournal", "Identifiant (ISSN)", nullptr));
        label_8->setText(QApplication::translate("FenetreFormJournal", "Nom", nullptr));
        label_9->setText(QApplication::translate("FenetreFormJournal", "Volume", nullptr));
        label_10->setText(QApplication::translate("FenetreFormJournal", "Numero", nullptr));
        label_11->setText(QApplication::translate("FenetreFormJournal", "Pages", nullptr));
        btnConfirmer->setText(QApplication::translate("FenetreFormJournal", "Confirmer", nullptr));
        btnAnnuler->setText(QApplication::translate("FenetreFormJournal", "Annuler", nullptr));
        Auteur->setText(QString());
        Nom->setText(QString());
        Identifiant->setText(QString());
        Titre->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FenetreFormJournal: public Ui_FenetreFormJournal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREFORMJOURNAL_H
