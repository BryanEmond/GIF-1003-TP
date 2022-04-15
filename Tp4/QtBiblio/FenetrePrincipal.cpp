/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   FenetrePrincipal.cpp
 * Author: etudiant
 *
 * Created on April 14, 2022, 7:43 PM
 */

#include "FenetrePrincipal.h"
#include "FenetreFormJournal.h"
#include "FenetreFormOuvrage.h"
#include "FenetreFormSupprimer.h"
#include "Journal.h"
#include "Ouvrage.h"
#include "Bibliographie.h"
#include "ReferenceException.h"
#include <QMessageBox>

FenetrePrincipal::FenetrePrincipal() : m_bibliographie(NOMBIBLIO)
{
    widget.setupUi(this);
}

void FenetrePrincipal::formJournal()
{
    FenetreFormJournal journal;
    if (journal.exec()) {
        try {
            biblio::Journal jou(journal.reqAuteurs().toStdString(), journal.reqTitre().toStdString(), journal.reqAnnee(), journal.reqIdentifiant().toStdString(), journal.reqNom().toStdString(), journal.reqVolume(), journal.reqNumero(), journal.reqPages());
            m_bibliographie.ajouterReference(jou);
            widget.textEdit->setText(m_bibliographie.reqBibliographieFormate().c_str());
        }
        catch (ReferenceDejaPresenteException &er) {
            QString message = "La reference est deja presente dans la bibliographie \n";
            message.append(er.what());
            QMessageBox::warning(this, "La reference est deja presente!", message);
        }
        catch (PreconditionException &er) {
            QString message = "la reference n'a pas les carecteristiques requises! \n";
            QMessageBox::warning(this, "La reference n'est pas valide!", message);
        }
    }
}

void FenetrePrincipal::formOuvrage()
{
    FenetreFormOuvrage ouvrage;
    if (ouvrage.exec()) {
        try {
            biblio::Ouvrage ouv(ouvrage.reqAuteurs().toStdString(), ouvrage.reqTitre().toStdString(), ouvrage.reqAnnee(), ouvrage.reqIdentifiant().toStdString(), ouvrage.reqVille().toStdString(), ouvrage.reqEditeur().toStdString());
            m_bibliographie.ajouterReference(ouv);
            widget.textEdit->setText(m_bibliographie.reqBibliographieFormate().c_str());
        }
        catch (ReferenceDejaPresenteException &er) {
            QString message = "La reference est deja presente dans la bibliographie \n";
            message.append(er.what());
            QMessageBox::warning(this, "La reference est deja presente!", message);
        }
        catch (PreconditionException &er) {
            QString message = "la reference n'a pas les carecteristiques requises! \n";
            QMessageBox::warning(this, "La reference n'est pas valide!", message);
        }
    }
}

void FenetrePrincipal::formSupprimerReference()
{
    FenetreFormSupprimer supprimer;
    if (supprimer.exec()) {
        try {
            m_bibliographie.supprimerReference(supprimer.reqIdentifiant().toStdString());
            widget.textEdit->setText(m_bibliographie.reqBibliographieFormate().c_str());
        }
        catch (ReferenceAbsenteException &er) {
            QString message = "Cette reference n'existe pas dans la bibliographie \n ";
            message.append(er.what());
            QMessageBox::warning(this, "La reference n'existe pas!", message);
        }
    }
}

FenetrePrincipal::~FenetrePrincipal()
{
}
