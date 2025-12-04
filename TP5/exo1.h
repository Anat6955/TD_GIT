#ifndef exo1_h
#define exo1_h

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

void UTF8();
void afficher_menu();
int lire_choix();
void initialisation_tab(int tab[]);
int ajouter_consommation(int tab[]);
void afficher_resume(int tab[]);
int sauvegarder(char nom[], int tab[]);
int charger(char nom[], int tab[]);
int humeur_bonbon(int tab[]);
int humeur_legume(int tab[]);
int humeur_fruit(int tab[]);
int affiche_barre(int val, int max);
void afficher_objectif(int tab[]);
#endif