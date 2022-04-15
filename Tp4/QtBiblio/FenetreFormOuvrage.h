/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   FenetreFormOuvrage.h
 * Author: etudiant
 *
 * Created on April 14, 2022, 8:40 PM
 */

#ifndef _FENETREFORMOUVRAGE_H
#define _FENETREFORMOUVRAGE_H

#include "ui_FenetreFormOuvrage.h"

class FenetreFormOuvrage : public QDialog
{
  Q_OBJECT
public:
  FenetreFormOuvrage ();
  virtual ~FenetreFormOuvrage ();
  QString reqAuteurs () const;
  QString reqTitre ()const;
  int reqAnnee ()const;
  QString reqIdentifiant ()const;
  QString reqVille ()const;
  QString reqEditeur ()const;
private slots:
  void ouvrageValidation ();
private:
  Ui::FenetreFormOuvrage widget;
};

#endif /* _FENETREFORMOUVRAGE_H */
