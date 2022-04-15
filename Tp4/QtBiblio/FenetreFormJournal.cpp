/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   FenetreFormJournal.cpp
 * Author: etudiant
 *
 * Created on April 14, 2022, 8:03 PM
 */

#include "QMessageBox"
#include "FenetreFormJournal.h"

FenetreFormJournal::FenetreFormJournal()
{
    widget.setupUi(this);
}

FenetreFormJournal::~FenetreFormJournal()
{
}

void FenetreFormJournal::journalValidation()
{
    if (reqAuteurs().isEmpty()) {
        QString message("L'auteur ne doit pas etre vide.");
        QMessageBox::information(this, "ERREUR", message);
        return;
    }
    if (reqTitre().isEmpty()) {
        QString message("Le titre ne doit pas etre vide.");
        QMessageBox::information(this, "ERREUR", message);
        return;
    }
    if (reqAnnee() <= 0) {
        QString message("L'annee doit etre positif.");
        QMessageBox::information(this, "ERREUR", message);
        return;
    }
    if (reqIdentifiant().isEmpty()) {
        QString message("L'identifiant ne doit pas etre vide.");
        QMessageBox::information(this, "ERREUR", message);
        return;
    }
    if (reqNom().isEmpty()) {
        QString message("Le nom ne doit pas etre vide.");
        QMessageBox::information(this, "ERREUR", message);
        return;
    }
    if (reqVolume() <= 0) {
        QString message("Le volume doit etre positif.");
        QMessageBox::information(this, "ERREUR", message);
        return;
    }
    if (reqNumero() <= 0) {
        QString message("Le numero doit etre positif.");
        QMessageBox::information(this, "ERREUR", message);
        return;
    }
    if (reqPages() <= 0) {
        QString message("La pages doit etre positif.");
        QMessageBox::information(this, "ERREUR", message);
        return;
    }
    accept();

}

QString FenetreFormJournal::reqAuteurs() const
{
    return widget.Auteur->text();
}

QString FenetreFormJournal::reqTitre()const
{
    return widget.Titre->text();
}

int FenetreFormJournal::reqAnnee()const
{
    return widget.Annee->value();
}

QString FenetreFormJournal::reqIdentifiant()const
{
    return widget.Identifiant->text();
}

QString FenetreFormJournal::reqNom()const
{
    return widget.Nom->text();
}

int FenetreFormJournal::reqVolume()const
{
    return widget.Volume->value();
}

int FenetreFormJournal::reqNumero()const
{
    return widget.Numero->value();
}

int FenetreFormJournal::reqPages()const
{
    return widget.Pages->value();
}