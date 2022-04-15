/*
 * /file G
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Reference.cpp
 * Author: etudiant
 *
 * Created on February 26, 2022, 11:23 AM
 */

#include "Reference.h"
#include <string>
#include <iostream>
#include <sstream>

namespace biblio
{

    Reference::Reference(const std::string& p_auteurs, const std::string& p_titre, const int& p_annee, const std::string& p_identifiant)
    {
        m_auteurs = p_auteurs;
        m_titre = p_titre;
        m_annee = p_annee;
        m_identifiant = p_identifiant;

    }

    bool Reference::operator==(const Reference& p_ref)
    {
        if (m_auteurs == p_ref.m_auteurs && m_titre == p_ref.m_titre && m_annee == p_ref.m_annee && m_identifiant == p_ref.m_identifiant) {
            return true;
        }
        return false;
    }

    void Reference::asgAuteur(const std::string& p_auteurs)
    {
        m_auteurs = p_auteurs;
    }

    void Reference::asgTitre(const std::string& p_titre)
    {
        m_titre = p_titre;
    }

    void Reference::asgAnnee(const int& p_annee)
    {
        m_annee = p_annee;
    }

    void Reference::asgIdentifiant(const std::string& p_identifiant)
    {
        m_identifiant = p_identifiant;
    }

    std::string Reference::reqAuteur()
    {
        return m_auteurs;
    }

    std::string Reference::reqTitre()
    {
        return m_titre;
    }

    int Reference::reqAnnee()
    {
        return m_annee;
    }

    std::string Reference::reqIdentifiant()
    {
        return m_identifiant;
    }

    std::string Reference::reqReferenceFormate()
    {
        std::ostringstream os;
        os << reqAuteur() << ", " << reqTitre() << ", " << reqAnnee() << ", " << reqIdentifiant();
        return os.str();
    }

    Reference::~Reference()
    {
    }
}

