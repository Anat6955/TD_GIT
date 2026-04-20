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


