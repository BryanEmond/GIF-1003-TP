/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: etudiant
 *
 * Created on April 12, 2022, 10:51 AM
 */

#include <QApplication>
#include <QDesktopWidget>
#include <iostream>
#include "FenetrePrincipal.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    FenetrePrincipal win;
    win.show();

    return app.exec();
}

