/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ReferenceException.h
 * Author: etudiant
 *
 * Created on April 13, 2022, 8:56 PM
 */

#ifndef REFERENCEEXCEPTION_H
#define REFERENCEEXCEPTION_H
#include <stdexcept>
#include <string>

class ReferenceException : public std::runtime_error
{
public:
  ReferenceException (const std::string& p_raison);
};

class ReferenceDejaPresenteException : public ReferenceException
{
public:
  ReferenceDejaPresenteException (const std::string& p_raison);
};

class ReferenceAbsenteException : public ReferenceException
{
public:
  ReferenceAbsenteException (const std::string& p_raison);
};

#endif /* REFERENCEEXCEPTION_H */

