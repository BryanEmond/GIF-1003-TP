/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   FenetreFormSupprimer.cpp
 * Author: etudiant
 *
 * Created on April 14, 2022, 8:49 PM
 */

#include "FenetreFormSupprimer.h"
#include "QMessageBox"

FenetreFormSupprimer::FenetreFormSupprimer()
{
    widget.setupUi(this);
}

FenetreFormSupprimer::~FenetreFormSupprimer()
{
}

void FenetreFormSupprimer::supprimerValidation()
{
    if (reqIdentifiant().isEmpty()) {
        QString message("L'identifiant ne doit pas etre vide.");
        QMessageBox::information(this, "ERREUR", message);
        return;
    }

    accept();
}

QString FenetreFormSupprimer::reqIdentifiant()const
{
    return widget.Identifiant->text();
}
