#include "medoc.h"


void saisir(Medicament Tab[],int N) {
    for(int i = 0; i < N; i++) {
        printf("\nMedicament %d\n", i+1);

        printf("Nom: ");
        scanf("%s", Tab[i].nom);

        printf("Code: ");
        scanf("%d", &Tab[i].code);

        printf("Date fabrication (YYYY-MM-DD): ");
        scanf("%s", Tab[i].dateFab);

        printf("Date peremption (YYYY-MM-DD): ");
        scanf("%s", Tab[i].datePer);

        printf("Prix: ");
        scanf("%f", &Tab[i].prix);

        printf("Nombre vendus: ");
        scanf("%d", &Tab[i].nbVendus);

        printf("Stock restant: ");
        scanf("%d", &Tab[i].nbStock);
    }
}

void echanger(Medicament *a, Medicament *b) {
    Medicament temp = *a;
    *a = *b;
    *b = *a;
}


void triParDate(Medicament Tab[],int N) {
    for(int i = 0; i < N-1; i++) {
        for(int j = 0; j < N-1-i; j++) {
            if(strcmp(Tab[j].datePer, Tab[j+1].datePer) > 0) {
                echanger(&Tab[j], &Tab[j+1]);
            }
        }
    }
}




int rechercheDichotomique(Medicament Tab[], char val[], int N) {
    int debut = 0, fin = N - 1;

    while(debut <= fin) {
        int mil = (debut + fin) / 2;

        int cmp = strcmp(val, Tab[mil].nom);

        if(cmp == 0) {
            return mil;
        } else if(cmp > 0) {
            debut = mil + 1;
        } else {
            fin = mil - 1;
        }
    }
    return -1;
}

