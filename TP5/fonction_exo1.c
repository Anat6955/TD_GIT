#include "exo1.h"

void afficher_menu(){
    printf("==============================\n");
    printf("  Suivi de consomation\n");
    printf("==============================\n");
    printf("1. Ajouter une consomation\n");
    printf("2. Afficher le resume deu jour\n");
    printf("3. Sauvegarder et quitter\n");
}

int lire_choix(){
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d",&choix);
    if (choix != 1 && choix != 2 && choix != 3){
        printf("Votre choix doit etre compris entre 1 ,2 ou 3\n");
    }
    return choix;
}