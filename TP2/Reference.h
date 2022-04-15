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

/* \namespace biblio
 * \brief Namespace du developpement Bibliographie
 */

namespace biblio
{

  class Reference
  {
  public:
    Reference (const std::string& p_auteurs, const std::string& p_titre, const int& p_annee, const std::string& p_identifiant);
    bool operator== (const Reference& p_ref);

    void asgAuteur (const std::string& p_auteurs);
    void asgTitre (const std::string& p_titre);
    void asgAnnee (const int& p_annee);
    void asgIdentifiant (const std::string& p_identifiant);

    std::string reqAuteur ();
    std::string reqTitre ();
    int reqAnnee ();
    std::string reqIdentifiant ();
    std::string reqReferenceFormate ();
    virtual ~Reference ();

  private:
    std::string m_auteurs;
    std::string m_titre;
    int m_annee;
    std::string m_identifiant;
  };
}

#endif /* REFERENCE_H */

