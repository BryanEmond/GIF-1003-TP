/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Journal.cpp
 * Author: etudiant
 *
 * Created on April 4, 2022, 6:22 PM
 */
#include <sstream>
#include "Journal.h"
#include "validationFormat.h"
#include "ContratException.h"

namespace biblio
{

    Journal::Journal(const std::string& p_auteurs, const std::string& p_titre, const int& p_annee, const std::string& p_identifiant, const std::string& p_nom, const int& p_volume, const int& p_numero, const int& p_pages) : Reference(p_auteurs, p_titre, p_annee, p_identifiant), m_nom(p_nom), m_volume(p_volume), m_numero(p_numero), m_pages(p_pages)
    {
        PRECONDITION(util::validerCodeIssn(p_identifiant));
        POSTCONDITION(m_nom == p_nom);
        POSTCONDITION(m_volume == p_volume);
        POSTCONDITION(m_numero == p_numero);
        POSTCONDITION(m_pages == p_pages);
        INVARIANTS();
    }

    Journal::~Journal()
    {
    }

    Reference* Journal::clone() const
    {
        return new Journal(*this);
    }

    std::string Journal::reqReferenceFormate() const
    {
        std::ostringstream os;
        os << Reference::reqAuteur() << ", " << Reference::reqTitre() << ", " << Journal::reqNom() << ", vol. " << Journal::reqVolume() << ", no. " << Journal::reqNumero() << ", pp. " << Journal::reqPages() << ", " << Reference::reqAnnee() << ", " << Reference::reqIdentifiant();
        return os.str();
    }

    void Journal::verifieInvariant()const
    {
        INVARIANT(util::validerCodeIssn(m_identifiant));
    }

    void Journal::asgNom(const std::string& p_nom)
    {
        m_nom = p_nom;
        INVARIANTS();
    }

    void Journal::asgVolume(const int& p_volume)
    {
        m_volume = p_volume;
        INVARIANTS();
    }

    void Journal::asgNumero(const int& p_numero)
    {
        m_numero = p_numero;
        INVARIANTS();
    }

    void Journal::asgPages(const int& p_pages)
    {
        m_pages = p_pages;
        INVARIANTS();
    }

    const std::string Journal::reqNom()const
    {
        return m_nom;
    }

    const int Journal::reqVolume()const
    {
        return m_volume;
    }

    const int Journal::reqNumero()const
    {
        return m_numero;
    }

    const int Journal::reqPages()const
    {
        return m_pages;
    }
}