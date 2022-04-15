/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newsimpletest2.cpp
 * Author: etudiant
 *
 * Created on April 7, 2022, 8:18 PM
 */
#include <stdlib.h>
#include <iostream>
#include <gtest/gtest.h>
#include <string>
#include <iostream>

#include "Ouvrage.h"

using namespace biblio;

/*
 * Simple C++ Test Suite
 */
TEST(Ouvrage, OuvrageConstructeur)
{
    Ouvrage ouv("j", "titre", 2005, "ISBN 999-2-1581-0701-1", "ville", "editeur");
    Ouvrage ouv2("j", "titre", 2005, "ISBN 999-2-1581-0701-1", "ville", "editeur");
    ASSERT_EQ(ouv, ouv2);
}

TEST(Ovrage, OuvrageConstructeurInvalid)
{
    Ouvrage ouv("j", "titre", 2000, "ISBN 999-2-15810701-1", "ville", "editeur");
    ASSERT_THROW(ouv, PreconditionException);
}

TEST(Ovrage, OuvrageFormate)
{
    Ouvrage ouv("j", "titre", 2000, "ISBN 999-2-1581-0701-1", "ville", "editeur");
    std::cout << ouv.reqReferenceFormate() << std::endl;
}

TEST(Ovrage, OuvrageReqEditeur)
{
    std::string editeur = "editeur";
    Ouvrage ouv("j", "titre", 2000, "ISBN 999-2-1581-0701-1", "ville", editeur);
    ASSERT_EQ(ouv.reqEditeur(), editeur);
}

TEST(Ovrage, OuvrageReqVille)
{
    std::string ville = "ville";
    Ouvrage ouv("j", "titre", 2000, "ISBN 999-2-1581-0701-1", ville, "editeur");
    ASSERT_EQ(ouv.reqVille(), ville);
}

TEST(Ovrage, OuvrageAsgEditeur)
{
    std::string editeur = "editeur";
    Ouvrage ouv("j", "titre", 2000, "ISBN 999-2-1581-0701-1", "ville", editeur);\
    std::string editeur2 = "editeur2";
    ouv.asgEditeur(editeur2);
    ASSERT_EQ(ouv.reqEditeur(), editeur2);
}

TEST(Ovrage, OuvrageAsgVille)
{
    std::string ville = "ville";
    Ouvrage ouv("j", "titre", 2000, "ISBN 999-2-1581-0701-1", ville, "editeur");
    std::string ville2 = "ville2";
    ouv.asgVille(ville2);
    ASSERT_EQ(ouv.reqVille(), ville2);
}