/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ReferenceException.cpp
 * Author: etudiant
 *
 * Created on April 13, 2022, 8:56 PM
 */

#include "ReferenceException.h"
#include <string>

ReferenceException::ReferenceException(const std::string& p_raison) : std::runtime_error(p_raison)
{
}

ReferenceDejaPresenteException::ReferenceDejaPresenteException(const std::string& p_raison) : ReferenceException(p_raison)
{
}

ReferenceAbsenteException::ReferenceAbsenteException(const std::string& p_raison) : ReferenceException(p_raison)
{
}