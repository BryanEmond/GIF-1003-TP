/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: etudiant
 *
 * Created on April 6, 2022, 9:22 PM
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include "Journal.h"
#include "Ouvrage.h"
#include "Bibliographie.h"
#include "validationFormat.h"

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
    cout << "===================================================" << endl;

    cout << endl;
    cout << "Entrez le nom de la bibliographie :  " << endl;
    cin.getline(buffer, 256);
    string nomBibliographie = buffer;
    biblio::Bibliographie biblio(nomBibliographie);
    cout << endl;

    cout << "---------------------------------------------------" << endl;
    cout << "Ajoutez un Ouvrage" << endl;
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
    cout << "Entrez la ville d'edition :  " << endl;
    cin.getline(buffer, 256);
    string ville = buffer;
    cout << endl;
    cout << "Entrez l'editeur :  " << endl;
    cin.getline(buffer, 256);
    string editeur = buffer;
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
    cout << "Entrez le code indentification (ISBN) : " << endl;
    cin.getline(bufferCode, 256);
    bool valide = false;
    if (validerCodeIsbn(bufferCode)) {
        valide = true;
    }
    while (!valide) {
        cout << endl;
        cout << "Entrez un code indentification (ISBN) valide!" << endl;
        cin.getline(bufferCode, 256);
        if (validerCodeIsbn(bufferCode)) {
            valide = true;
        }
    }
    cout << endl;
    string code = bufferCode;
    biblio::Ouvrage ouv(auteurs, titre, annee, code, ville, editeur);
    biblio.ajouterReference(ouv);

    cout << "---------------------------------------------------" << endl;
    cout << "Ajoutez un Journal" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << endl;
    cout << "Entrez le nom du ou des auteurs :  " << endl;
    cin.getline(buffer, 256);
    while (!validerFormatNom(buffer)) {
        cout << endl;
        cout << "Entrez un ou des nom auteurs valide!" << endl;
        cin.getline(buffer, 256);
    }
    auteurs = buffer;
    cout << endl;
    cout << "Entrez le titre :  " << endl;
    cin.getline(buffer, 256);
    titre = buffer;
    cout << endl;
    cout << "Entrez le nom de la revue dans laquelle a ete publiee la reference :  " << endl;
    cin.getline(buffer, 256);
    string nom = buffer;
    cout << endl;
    cout << "Entrez le volume :  " << endl;
    cin.getline(buffer, 256);
    int volume = atoi(buffer);
    cout << endl;
    cout << "Entrez le numero:  " << endl;
    cin.getline(buffer, 256);
    int numero = atoi(buffer);
    cout << endl;
    cout << "Entrez la page ou commence la reference :  " << endl;
    cin.getline(buffer, 256);
    int pages = atoi(buffer);
    cout << endl;
    cout << "Entrez l'annee d'edition : " << endl;
    cin.getline(buffer, 256);
    while (atoi(buffer) <= 0) {
        cout << endl;
        cout << "Entrez une annee valide!" << endl;
        cin.getline(buffer, 256);
    }
    cout << endl;
    annee = atoi(buffer);
    bufferCode[256];
    cout << "Entrez le code indentification (ISSN) : " << endl;
    cin.getline(bufferCode, 256);
    valide = false;
    if (validerCodeIssn(bufferCode)) {
        valide = true;
    }
    while (!valide) {
        cout << endl;
        cout << "Entrez un code indentification (ISSN) valide!" << endl;
        cin.getline(bufferCode, 256);
        if (validerCodeIssn(bufferCode)) {
            valide = true;
        }
    }
    cout << endl;
    code = bufferCode;
    biblio::Journal jou(auteurs, titre, annee, code, nom, volume, numero, pages);
    biblio.ajouterReference(jou);
    cout << "References bibliographiques enregistrees : " << endl;
    cout << biblio.reqBibliographieFormate();
    cout << endl;
}

