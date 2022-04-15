/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   FenetreFormJournal.h
 * Author: etudiant
 *
 * Created on April 14, 2022, 8:03 PM
 */

#ifndef _FENETREFORMJOURNAL_H
#define _FENETREFORMJOURNAL_H

#include "ui_FenetreFormJournal.h"

class FenetreFormJournal : public QDialog
{
  Q_OBJECT
public:
  FenetreFormJournal ();
  virtual ~FenetreFormJournal ();
  QString reqAuteurs () const;
  QString reqTitre ()const;
  int reqAnnee ()const;
  QString reqIdentifiant ()const;
  QString reqNom ()const;
  int reqVolume ()const;
  int reqNumero ()const;
  int reqPages ()const;
private slots:
  void journalValidation ();
private:
  Ui::FenetreFormJournal widget;
};

#endif /* _FENETREFORMJOURNAL_H */
