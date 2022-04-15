/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Bibliographie.h
 * Author: etudiant
 *
 * Created on April 6, 2022, 7:20 AM
 */

#ifndef BIBLIOGRAPHIE_H
#define BIBLIOGRAPHIE_H
#include <vector>
#include "Reference.h"
#include "ContratException.h"

namespace biblio
{

  class Bibliographie
  {
  public:
    Bibliographie (const std::string p_nomBibliographie);
    virtual ~Bibliographie ();
    void ajouterReference (const biblio::Reference& p_nouvelleReference);
    const std::string reqBibliographieFormate ()const;
    const std::string reqNomBibliographie () const;
  private:
    std::string m_nomBibliographie;
    std::vector<biblio::Reference*> m_vReference;
    bool referenceEstDejaPresente (const std::string& p_identifiant) const;
    void verifieInvariant () const;
  };
}
#endif /* BIBLIOGRAPHIE_H */

