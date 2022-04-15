/********************************************************************************
** Form generated from reading UI file 'FenetreFormOuvrage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREFORMOUVRAGE_H
#define UI_FENETREFORMOUVRAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_FenetreFormOuvrage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btnAnnuler;
    QPushButton *btnConfirmer;
    QLineEdit *Auteur;
    QLineEdit *Titre;
    QLineEdit *Identifiant;
    QLineEdit *Ville;
    QLineEdit *Editeur;
    QSpinBox *Annee;

    void setupUi(QDialog *FenetreFormOuvrage)
    {
        if (FenetreFormOuvrage->objectName().isEmpty())
            FenetreFormOuvrage->setObjectName(QString::fromUtf8("FenetreFormOuvrage"));
        FenetreFormOuvrage->resize(400, 300);
        label = new QLabel(FenetreFormOuvrage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 200, 20));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(FenetreFormOuvrage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 40, 200, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(FenetreFormOuvrage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 130, 200, 20));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(FenetreFormOuvrage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 100, 200, 20));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(FenetreFormOuvrage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 70, 200, 20));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(FenetreFormOuvrage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 160, 200, 20));
        label_6->setAlignment(Qt::AlignCenter);
        btnAnnuler = new QPushButton(FenetreFormOuvrage);
        btnAnnuler->setObjectName(QString::fromUtf8("btnAnnuler"));
        btnAnnuler->setGeometry(QRect(60, 250, 90, 28));
        btnConfirmer = new QPushButton(FenetreFormOuvrage);
        btnConfirmer->setObjectName(QString::fromUtf8("btnConfirmer"));
        btnConfirmer->setGeometry(QRect(250, 250, 90, 28));
        Auteur = new QLineEdit(FenetreFormOuvrage);
        Auteur->setObjectName(QString::fromUtf8("Auteur"));
        Auteur->setGeometry(QRect(200, 7, 200, 28));
        Titre = new QLineEdit(FenetreFormOuvrage);
        Titre->setObjectName(QString::fromUtf8("Titre"));
        Titre->setGeometry(QRect(200, 37, 200, 28));
        Identifiant = new QLineEdit(FenetreFormOuvrage);
        Identifiant->setObjectName(QString::fromUtf8("Identifiant"));
        Identifiant->setGeometry(QRect(200, 98, 200, 28));
        Ville = new QLineEdit(FenetreFormOuvrage);
        Ville->setObjectName(QString::fromUtf8("Ville"));
        Ville->setGeometry(QRect(200, 128, 200, 28));
        Editeur = new QLineEdit(FenetreFormOuvrage);
        Editeur->setObjectName(QString::fromUtf8("Editeur"));
        Editeur->setGeometry(QRect(200, 158, 200, 28));
        Annee = new QSpinBox(FenetreFormOuvrage);
        Annee->setObjectName(QString::fromUtf8("Annee"));
        Annee->setGeometry(QRect(200, 68, 200, 28));
        QWidget::setTabOrder(Auteur, Titre);
        QWidget::setTabOrder(Titre, Annee);
        QWidget::setTabOrder(Annee, Identifiant);
        QWidget::setTabOrder(Identifiant, Ville);
        QWidget::setTabOrder(Ville, Editeur);
        QWidget::setTabOrder(Editeur, btnAnnuler);
        QWidget::setTabOrder(btnAnnuler, btnConfirmer);

        retranslateUi(FenetreFormOuvrage);
        QObject::connect(btnAnnuler, SIGNAL(clicked()), FenetreFormOuvrage, SLOT(close()));
        QObject::connect(btnConfirmer, SIGNAL(clicked()), FenetreFormOuvrage, SLOT(ouvrageValidation()));

        QMetaObject::connectSlotsByName(FenetreFormOuvrage);
    } // setupUi

    void retranslateUi(QDialog *FenetreFormOuvrage)
    {
        FenetreFormOuvrage->setWindowTitle(QApplication::translate("FenetreFormOuvrage", "FenetreFormOuvrage", nullptr));
        label->setText(QApplication::translate("FenetreFormOuvrage", "Auteur", nullptr));
        label_2->setText(QApplication::translate("FenetreFormOuvrage", "Titre", nullptr));
        label_3->setText(QApplication::translate("FenetreFormOuvrage", "Ville", nullptr));
        label_4->setText(QApplication::translate("FenetreFormOuvrage", "Identifiant (ISBN)", nullptr));
        label_5->setText(QApplication::translate("FenetreFormOuvrage", "Annee", nullptr));
        label_6->setText(QApplication::translate("FenetreFormOuvrage", "Editeur", nullptr));
        btnAnnuler->setText(QApplication::translate("FenetreFormOuvrage", "Annuler", nullptr));
        btnConfirmer->setText(QApplication::translate("FenetreFormOuvrage", "Confimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetreFormOuvrage: public Ui_FenetreFormOuvrage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREFORMOUVRAGE_H
