/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   FenetreFormOuvrage.cpp
 * Author: etudiant
 *
 * Created on April 14, 2022, 8:40 PM
 */

#include "FenetreFormOuvrage.h"
#include "QMessageBox"

FenetreFormOuvrage::FenetreFormOuvrage()
{
    widget.setupUi(this);
}

FenetreFormOuvrage::~FenetreFormOuvrage()
{
}

void FenetreFormOuvrage::ouvrageValidation()
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
    if (reqVille().isEmpty()) {
        QString message("La ville ne doit pas etre vide.");
        QMessageBox::information(this, "ERREUR", message);
        return;
    }
    if (reqEditeur().isEmpty()) {
        QString message("L'editeur ne doit pas etre vide.");
        QMessageBox::information(this, "ERREUR", message);
        return;
    }
    accept();

}

QString FenetreFormOuvrage::reqAuteurs() const
{
    return widget.Auteur->text();
}

QString FenetreFormOuvrage::reqTitre()const
{
    return widget.Titre->text();
}

int FenetreFormOuvrage::reqAnnee()const
{
    return widget.Annee->value();
}

QString FenetreFormOuvrage::reqIdentifiant()const
{
    return widget.Identifiant->text();
}

QString FenetreFormOuvrage::reqVille()const
{
    return widget.Ville->text();
}

QString FenetreFormOuvrage::reqEditeur()const
{
    return widget.Editeur->text();
}