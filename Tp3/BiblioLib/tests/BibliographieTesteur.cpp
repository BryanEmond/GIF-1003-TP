/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newsimpletest1.cpp
 * Author: etudiant
 *
 * Created on April 7, 2022, 7:40 PM
 */

#include <stdlib.h>
#include <iostream>
#include <gtest/gtest.h>
#include <string>
#include <iostream>

#include "Bibliographie.h"
#include "Reference.h"
#include "Journal.h"
#include "Ouvrage.h"

using namespace biblio;

/*
 * Simple C++ Test Suite
 */
TEST(Bibliographie, BibliographieConstructeur)
{
    std::string nomBiblio = "biblio1";
    Bibliographie biblio(nomBiblio);
    ASSERT_EQ(nomBiblio, biblio.reqNomBibliographie());
}

TEST(Ovrage, BibliographieAjoutOuvrage)
{
    Ouvrage ouv("j", "titre", 2005, "ISBN 999-2-1581-0701-1", "ville", "editeur");
    Bibliographie biblio("biblio1");
    biblio.ajouterReference(ouv);
    std::cout << biblio.reqBibliographieFormate() << std::endl;
}
