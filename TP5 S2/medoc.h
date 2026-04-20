#ifndef MEDOC
#define MEDOC

#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[50];
    int code;
    char dateFab[11];
    char datePer[11];
    float prix;
    int nbVendus;
    int nbStock;
} Medicament;


void saisir(Medicament Tab[],int N);
void echanger(Medicament *a, Medicament *b);
void triParDate(Medicament Tab[],int N);
int rechercheDichotomique(Medicament Tab[], char val[], int N);
void triParNom(Medicament tab[],int N);



#endif