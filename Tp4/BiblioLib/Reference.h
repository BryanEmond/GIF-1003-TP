/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Reference.h
 * Author: Brayn Emond Blais
 *
 * Created on February 26, 2022, 11:23 AM
 */

#ifndef REFERENCE_H
#define REFERENCE_H
#include <string>
#include "ContratException.h"

/* \namespace biblio
 * \brief Namespace du developpement Bibliographie
 */

namespace biblio
{

  class Reference
  {
  public:
    Reference (const std::string& p_auteurs, const std::string& p_titre, const int& p_annee, const std::string& p_identifiant);

    virtual ~Reference ();

    virtual Reference* clone () const = 0;

    bool operator== (const Reference& p_ref)const;

    void asgAuteur (const std::string& p_auteurs);
    void asgTitre (const std::string& p_titre);
    void asgAnnee (const int& p_annee);
    void asgIdentifiant (const std::string& p_identifiant);

    const std::string reqAuteur ()const;
    const std::string reqTitre ()const;
    int reqAnnee ()const;
    const std::string reqIdentifiant ()const;
    virtual std::string reqReferenceFormate ()const;

  protected:
    virtual void verifieInvariant ()const;
    std::string m_auteurs;
    std::string m_titre;
    int m_annee;
    std::string m_identifiant;
  };
}

#endif /* REFERENCE_H */

