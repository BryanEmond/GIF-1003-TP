# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = QtBiblio
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += FenetreFormJournal.cpp FenetreFormOuvrage.cpp FenetreFormSupprimer.cpp FenetrePrincipal.cpp main.cpp
HEADERS += FenetreFormJournal.h FenetreFormOuvrage.h FenetreFormSupprimer.h FenetrePrincipal.h
FORMS += FenetreFormJournal.ui FenetreFormOuvrage.ui FenetreFormSupprimer.ui FenetrePrincipal.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++-10
DEFINES += 
INCLUDEPATH += ../BiblioLib 
LIBS += ../BiblioLib/dist/Debug/GNU-Linux/libbibliolib.a  
