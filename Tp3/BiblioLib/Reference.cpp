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
#include "ContratException.h"
#include "validationFormat.h"
#include <string>
#include <iostream>
#include <sstream>
namespace biblio
{

    Reference::Reference(const std::string& p_auteurs, const std::string& p_titre, const int& p_annee, const std::string& p_identifiant) : m_auteurs(p_auteurs), m_titre(p_titre), m_annee(p_annee), m_identifiant(p_identifiant)
    {
        PRECONDITION(util::validerFormatNom(p_auteurs));
        POSTCONDITION(m_auteurs == p_auteurs);
        POSTCONDITION(m_titre == p_titre);
        POSTCONDITION(m_annee == p_annee);
        POSTCONDITION(m_identifiant == p_identifiant);
        INVARIANTS();

    }

    const bool Reference::operator==(const Reference& p_ref)const
    {
        if (m_auteurs == p_ref.m_auteurs && m_titre == p_ref.m_titre && m_annee == p_ref.m_annee && m_identifiant == p_ref.m_identifiant) {
            return true;
        }
        return false;
    }

    void Reference::verifieInvariant()const
    {
        INVARIANT(util::validerFormatNom(m_auteurs));
    }

    void Reference::asgAuteur(const std::string& p_auteurs)
    {
        m_auteurs = p_auteurs;
        POSTCONDITION(m_auteurs == p_auteurs);
        INVARIANTS();
    }

    void Reference::asgTitre(const std::string& p_titre)
    {
        m_titre = p_titre;
        POSTCONDITION(m_titre == p_titre);
        INVARIANTS();
    }

    void Reference::asgAnnee(const int& p_annee)
    {
        m_annee = p_annee;
        POSTCONDITION(m_annee == p_annee);
        INVARIANTS();
    }

    void Reference::asgIdentifiant(const std::string& p_identifiant)
    {
        m_identifiant = p_identifiant;
        POSTCONDITION(m_identifiant == p_identifiant);
        INVARIANTS();
    }

    const std::string Reference::reqAuteur()const
    {
        return m_auteurs;
    }

    const std::string Reference::reqTitre()const
    {
        return m_titre;
    }

    const int Reference::reqAnnee()const
    {
        return m_annee;
    }

    const std::string Reference::reqIdentifiant()const
    {
        return m_identifiant;
    }

    std::string Reference::reqReferenceFormate()const
    {
        std::ostringstream os;
        os << reqAuteur() << ", " << reqTitre() << ", " << reqAnnee() << ", " << reqIdentifiant();
        return os.str();
    }

    Reference::~Reference()
    {
    }
}

