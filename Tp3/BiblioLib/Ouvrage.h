/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Ouvrage.h
 * Author: etudiant
 *
 * Created on April 5, 2022, 3:38 PM
 */

#ifndef OUVRAGE_H
#define OUVRAGE_H
#include "Reference.h"
#include "ContratException.h"

namespace biblio
{

  class Ouvrage : public Reference
  {
  public:
    Ouvrage (const std::string& p_auteurs, const std::string& p_titre, const int& p_annee, const std::string& p_identifiant, const std::string& p_ville, const std::string& p_editeur);

    void asgEditeur (const std::string& p_editeur);
    void asgVille (const std::string& p_ville);

    const std::string reqEditeur ()const;
    const std::string reqVille ()const;

    virtual ~Ouvrage ();
    virtual std::string reqReferenceFormate ()const;
    virtual Reference* clone () const;

  private:
    virtual void verifieInvariant ()const;
    std::string m_editeur;
    std::string m_ville;

  };
}
#endif /* OUVRAGE_H */

