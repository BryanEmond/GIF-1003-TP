au/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdlib.h>
#include <iostream>
#include <gtest/gtest.h>
#include <string>
#include <iostream>

#include "Journal.h"

        using namespace biblio;

/*
 * Simple C++ Test Suite
 */
TEST(Journal, JournalConstructeur)
{
    Journal jou("auteur", "titre", 2005, "ISSN 9999-1111", "nom", 1, 1, 200);
    Journal jou2("auteur", "titre", 2005, "ISSN 9999-1111", "nom", 1, 1, 200);
    ASSERT_EQ(jou, jou2);
}

TEST(Journal, JournalConstructeurInvalid)
{
    Journal jou("j", "titre", 2000, "ISBN 999-2-15810701-1", "nom", 1, 1, 200);
    ASSERT_THROW(jou, PreconditionException);
}
//

TEST(Journal, JournalFormate)
{
    Journal jou("auteur", "titre", 2005, "ISSN 9999-1111", "nom", 1, 1, 200);
    std::cout << jou.reqReferenceFormate() << std::endl;
}

TEST(Journal, JournalReqAsgNom)
{
    std::string nom = "nom";
    Journal jou("auteur", "titre", 2005, "ISSN 9999-1111", nom, 1, 1, 200);
    std::string nom2 = "nom2";
    jou.asgNom(nom2);
    ASSERT_EQ(jou.reqNom(), nom2);
}

TEST(Journal, JournalReqAsgVolume)
{
    int volume = 1;
    Journal jou("auteur", "titre", 2005, "ISSN 9999-1111", "nom", volume, 1, 200);
    int volume2 = 2;
    jou.asgVolume(volume2);
    ASSERT_EQ(jou.reqVolume(), volume2);
}

TEST(Journal, JournalReqAsgNumero)
{
    int numero = 1;
    Journal jou("auteur", "titre", 2005, "ISSN 9999-1111", "nom", 1, numero, 200);
    int numero2 = 2;
    jou.asgNumero(numero2);
    ASSERT_EQ(jou.reqNumero(), numero2);
}

TEST(Journal, JournalReqAsgPages)
{
    int pages = 1;
    Journal jou("auteur", "titre", 2005, "ISSN 9999-1111", "nom", 1, 1, pages);
    int pages2 = 2;
    jou.asgPages(pages2);
    ASSERT_EQ(jou.reqPages(), pages2);
}