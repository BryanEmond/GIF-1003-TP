/*
 * File:   gestionReferences.cpp
 * Brief: Programme interactif permettant d'obtenire interactivement avec l'utilisateur les donnees necessaires
 * pour creer reference biblio qui ne peut etre cree qu'avec des valeurs valides
 * Author: Bryan Emond Blais
 *
 * Created on February 26, 2022, 11:23 AM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include "./validationFormat.h"
#include "./Reference.h"

using namespace std;
using namespace util;
using namespace biblio;

/*
 *
 */

int main(int argc, char** argv)
{
    char buffer[256];
    cout << "Bienvenue a l'outil de gestion de references biblio" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << endl;
    cout << "Entrez le nom du ou des auteurs :  " << endl;
    cin.getline(buffer, 256);
    while (!validerFormatNom(buffer)) {
        cout << endl;
        cout << "Entrez un ou des nom auteurs valide!" << endl;
        cin.getline(buffer, 256);
    }
    string auteurs = buffer;
    cout << endl;

    cout << "Entrez le titre :  " << endl;
    cin.getline(buffer, 256);

    string titre = buffer;
    cout << endl;

    cout << "Entrez l'annee d'edition : " << endl;
    cin.getline(buffer, 256);
    while (atoi(buffer) <= 0) {
        cout << endl;
        cout << "Entrez une annee valide!" << endl;
        cin.getline(buffer, 256);
    }
    cout << endl;
    int annee = atoi(buffer);
    char bufferCode[256];
    cout << "Entrez le code indentification (ISSN ou ISBN) : " << endl;
    cin.getline(bufferCode, 256);
    bool valide = false;
    if (validerCodeIssn(bufferCode)) {
        valide = true;
    }
    else if (validerCodeIsbn(bufferCode)) {
        valide = true;
    }
    while (!valide) {
        cout << endl;
        cout << "Entrez un code indentification (ISSN ou ISBN) valide!" << endl;
        cin.getline(bufferCode, 256);
        if (validerCodeIssn(bufferCode)) {
            valide = true;
        }
        else if (validerCodeIsbn(bufferCode)) {
            valide = true;
        }
    }
    string code = bufferCode;
    Reference reference(auteurs, titre, annee, code);
    cout << "nouvelle reference" << endl << "------------------------------------" << endl;
    cout << reference.reqReferenceFormate() << endl << endl;
    Reference uneAutreReference = reference;
    cout << "Les deux reference sont egale: " << (uneAutreReference == reference) << endl;
    int anneeEdition;
    cout << "Entrez la nouvelle annee d'edition :" << endl;
    cin >> anneeEdition;
    while (anneeEdition <= 0) {
        cout << endl;
        cout << "Entrez une annee valide!" << endl;
        cin >> anneeEdition;
    }
    cout << endl;
    reference.asgAnnee(anneeEdition);
    cout << reference.reqReferenceFormate() << endl;
    cout << "Les deux reference sont egale: " << (uneAutreReference == reference) << endl;


    cout << endl;

}

