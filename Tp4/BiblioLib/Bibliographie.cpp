/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Bibliographie.cpp
 * Author: etudiant
 *
 * Created on April 6, 2022, 7:20 AM
 */

#include "Bibliographie.h"
#include "validationFormat.h"
#include "Reference.h"
#include <vector>
#include <sstream>
#include "ContratException.h"

namespace biblio
{

    Bibliographie::Bibliographie(const std::string p_nomBibliographie) : m_nomBibliographie(p_nomBibliographie)
    {
        POSTCONDITION(m_nomBibliographie == p_nomBibliographie);
        m_vReference.clear();
    }

    Bibliographie::~Bibliographie()
    {
        m_vReference.clear();
    }

    void Bibliographie::ajouterReference(const biblio::Reference& p_nouvelleReference)
    {
        if (!Bibliographie::referenceEstDejaPresente(p_nouvelleReference)) {
            m_vReference.push_back(p_nouvelleReference.clone());
        }
        else {

            throw ReferenceDejaPresenteException(p_nouvelleReference.reqReferenceFormate());
        }
    }

    bool Bibliographie::referenceEstDejaPresente(const biblio::Reference& p_reference) const
    {
        std::vector<Reference*> ::iterator iter;
        for (iter = m_vReference.begin(); iter < m_vReference.end(); iter++) {
            if (*iter == p_reference) {
                return true;
            }
        }
        return false;
    }

    const std::string Bibliographie::reqBibliographieFormate() const
    {
        std::ostringstream os;
        os << reqNomBibliographie() << std::endl;
        os << "======================================" << std::endl;
        std::vector<Reference*> ::iterator iter;
        for (iter = m_vReference.begin(); iter < m_vReference.end(); iter++) {
            os << *iter->reqReferenceFormate() << std::endl;
        }
        return os.str();
    }

    const std::string Bibliographie::reqNomBibliographie() const
    {

        return m_nomBibliographie;
    }

    void Bibliographie::supprimerReference(const std::string& p_identifiant)
    {

        bool identifiantTrouver = false;
        std::vector<Reference*> ::iterator iter;
        for (iter = m_vReference.begin(); iter < m_vReference.end(); iter++) {
            if ((*iter)->reqIdentifiant() == p_identifiant) {
                m_vReference.erase(iter);
                identifiantTrouver = true;
            }
        }
        if (!identifiantTrouver) {
            throw ReferenceAbsenteException(p_identifiant);
        }
    }
}