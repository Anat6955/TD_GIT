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

typedef struct ListeJoueur{
    char nom[25];
    int score_max;
    struct ListeJoueur *suivant;
}ListeJoueur;

void trim_newline(char *s);
void normalize_string(char *dest, const char *src);
int string_equals_normalized(const char *a, const char *b);
void play_song_excerpt_at(const char *filename, int start, int seconds);
int load_songs(char *filename, Chanson *chanson);

#endif