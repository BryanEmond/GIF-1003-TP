/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   FenetrePrincipal.h
 * Author: etudiant
 *
 * Created on April 14, 2022, 7:43 PM
 */

#ifndef _FENETREPRINCIPAL_H
#define _FENETREPRINCIPAL_H

#include "ui_FenetrePrincipal.h"
#include "Bibliographie.h"
#include <string>

const std::string NOMBIBLIO = "Bibliographie";

class FenetrePrincipal : public QMainWindow
{
  Q_OBJECT
public:
  FenetrePrincipal ();
  virtual ~FenetrePrincipal ();
private slots:
  void formJournal ();
  void formOuvrage ();
  void formSupprimerReference ();
private:
  biblio::Bibliographie m_bibliographie;
  Ui::FenetrePrincipal widget;
};

#endif /* _FENETREPRINCIPAL_H */
