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
#include "Reference.h"
#include <vector>
#include <sstream>

#include "ContratException.h"
namespace biblio
{

    Bibliographie::Bibliographie(const std::string p_nomBibliographie) : m_nomBibliographie(p_nomBibliographie)
    {
        POSTCONDITION(m_nomBibliographie == p_nomBibliographie);
    }

    Bibliographie::~Bibliographie()
    {
        m_vReference.clear();
    }

    void Bibliographie::ajouterReference(const biblio::Reference& p_nouvelleReference)
    {
        if (!Bibliographie::referenceEstDejaPresente(p_nouvelleReference.reqIdentifiant())) {
            m_vReference.push_back(p_nouvelleReference.clone());
        }
    }

    bool Bibliographie::referenceEstDejaPresente(const std::string& p_identifiant) const
    {
        for (auto* ref : m_vReference) {
            if (ref->reqIdentifiant() == p_identifiant) {
                return true;
            }
        }
        return false;
    }

    const std::string Bibliographie::reqBibliographieFormate() const
    {
        int a = 1;
        std::ostringstream os;
        os << reqNomBibliographie() << std::endl;
        os << "======================================" << std::endl;
        for (size_t i = 0; i < m_vReference.size(); ++i) {

            os << (*m_vReference[i]).reqReferenceFormate() << std::endl;
            a++;
        }
        return os.str();
    }

    const std::string Bibliographie::reqNomBibliographie() const
    {
        return m_nomBibliographie;
    }

}