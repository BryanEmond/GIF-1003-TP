/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Journal.h
 * Author: etudiant
 *
 * Created on April 4, 2022, 6:22 PM
 */

#ifndef JOURNAL_H
#define JOURNAL_H

#include "Reference.h"
#include "ContratException.h"

namespace biblio
{

  class Journal : public Reference
  {
  public:
    Journal (const std::string& p_auteurs, const std::string& p_titre, const int& p_annee, const std::string& p_identifiant, const std::string& p_nom, const int& p_volume, const int& p_numero, const int& p_pages);

    void asgNom (const std::string& p_nom);
    void asgVolume (const int& p_volume);
    void asgNumero (const int& p_numero);
    void asgPages (const int& p_pages);
    const std::string reqNom ()const;
    int reqVolume ()const;
    int reqNumero ()const;
    int reqPages ()const;

    virtual ~Journal ();
    virtual std::string reqReferenceFormate ()const;
    virtual Reference* clone () const;
  private:
    virtual void verifieInvariant ()const;
    std::string m_nom;
    int m_volume;
    int m_numero;
    int m_pages;
  };
}



#endif /* JOURNAL_H */

