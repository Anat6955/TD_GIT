#include <stdio.h>


void afficherMenu(){
    printf("==== GESTION DE NOTES ====\n");
    printf("1. Saisir le nombre d eleves\n");
    printf("2. Saisir les notes des eleves\n");
    printf("3. Afficher toutes les notes\n");
    printf("4. Afficher la moyenne d'un eleve\n");
    printf("5. Afficher la moyenne generales\n");
    printf("6. Afficher la meilleur note de chaque controle\n");
    printf("0. Quitter");
}

int main(){
    afficherMenu();
    return 0;
}