/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Ouvrage.cpp
 * Author: etudiant
 *
 * Created on April 5, 2022, 3:38 PM
 */

#include "Ouvrage.h"
#include <sstream>
#include "validationFormat.h"
#include "ContratException.h"

namespace biblio
{

    Ouvrage::Ouvrage(const std::string& p_auteurs, const std::string& p_titre, const int& p_annee, const std::string& p_identifiant, const std::string& p_ville, const std::string& p_editeur) : Reference(p_auteurs, p_titre, p_annee, p_identifiant), m_ville(p_ville), m_editeur(p_editeur)
    {
        PRECONDITION(util::validerCodeIsbn(p_identifiant));
        POSTCONDITION(m_ville == p_ville);
        POSTCONDITION(m_editeur == p_editeur);
        INVARIANTS();
    }

    Ouvrage::~Ouvrage()
    {
    }

    void Ouvrage::verifieInvariant()const
    {
        INVARIANT(util::validerCodeIsbn(m_identifiant));
    }

    void Ouvrage::asgEditeur(const std::string& p_editeur)
    {
        m_editeur = p_editeur;
        INVARIANTS();
    }

    void Ouvrage::asgVille(const std::string& p_ville)
    {
        m_ville = p_ville;
        INVARIANTS();
    }

    const std::string Ouvrage::reqEditeur()const
    {
        return m_editeur;
    }

    const std::string Ouvrage::reqVille()const
    {
        return m_ville;
    }

    std::string Ouvrage::reqReferenceFormate()const
    {
        std::ostringstream os;
        os << Ouvrage::reqAuteur() << ", " << Ouvrage::reqTitre() << ", " << reqVille() << " : " << reqEditeur() << ", " << Ouvrage::reqAnnee() << ", " << Ouvrage::reqIdentifiant();
        return os.str();
    }

    Reference* Ouvrage::clone() const
    {
        return new Ouvrage(*this);
    }
}