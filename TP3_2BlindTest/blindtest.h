#ifndef BLINDTEST
#define BLINDTEST

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

typedef struct{
    char nom_fichier[250];
    char titre[25];
    char artiste[50];
}Chanson;

typedef struct{
    char nom[25];
    int score;
}Joueur;

typedef struct{
    char nom[25];
    int score_max;
    ListeJoueur suivant;
}ListeJoueur;

#endif