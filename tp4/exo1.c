#include <stdio.h>


void afficherMenu(){
    printf("==== GESTION DE NOTES ====\n");
    printf("1. Saisir le nombre d eleves\n");
    printf("2. Saisir les notes des eleves\n");
    printf("3. Afficher toutes les notes\n");
    printf("4. Afficher la moyenne d'un eleve\n");
    printf("5. Afficher la moyenne generales\n");
    printf("6. Afficher la meilleur note de chaque controle\n");
    printf("0. Quitter\n");
}

int lireChoix(){
    int choix = -1;
    printf("Choississer un nombre : ");
    scanf("%d",&choix);
    return choix;
}

int saisirNombreEleves(){
    int nbEleve = 0;
    while (nbEleve < 1 || nbEleve > 30){
        printf("Combien y a t il d eleve dans votre classe (1 a 30) : ");
        scanf("%d",&nbEleve);
        if (nbEleve < 1 || nbEleve > 30){
            printf("Valeur invalide.\n");
        }
    }
}

int main(){
    afficherMenu();
    int choix=lireChoix();
    printf("Vous avez choisi : %d\n",choix);
    saisirNombreEleves();
    return 0;
}