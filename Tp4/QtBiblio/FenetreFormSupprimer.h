/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   FenetreFormSupprimer.h
 * Author: etudiant
 *
 * Created on April 14, 2022, 8:49 PM
 */

#ifndef _FENETREFORMSUPPRIMER_H
#define _FENETREFORMSUPPRIMER_H

#include "ui_FenetreFormSupprimer.h"

class FenetreFormSupprimer : public QDialog
{
  Q_OBJECT
public:
  FenetreFormSupprimer ();
  virtual ~FenetreFormSupprimer ();
  QString reqIdentifiant ()const;
private slots:
  void supprimerValidation ();
private:
  Ui::FenetreFormSupprimer widget;
};

#endif /* _FENETREFORMSUPPRIMER_H */
