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
    scanf("%d", &choix);
    return choix;
}

int saisirNombreEleves(){
    int nbEleve = 0;
    while (nbEleve < 1 || nbEleve > 30){
        printf("Combien y a t il d eleve dans votre classe (1 a 30) : ");
        scanf("%d", &nbEleve);
        if (nbEleve < 1 || nbEleve > 30){
            printf("Valeur invalide.\n");
        }
    }
    return nbEleve;
}

int saisirNote(int nbEleve, int tabNoteEleve[30][3]) {
    printf("nombre eleves %d", nbEleve);
    printf("Saisir les notes de 3 controles pour %d eleves.\n", nbEleve);
    for (int i = 0; i < nbEleve; i++){
        printf("Eleve %d :\n", i+1);
        for (int j = 0; j < 3; j++){
            int note = 0;
            printf("Note du controle %d (0 a 20) : ", j+1);
            scanf("%d", &note);
            while (note < 0 || note > 20){
                printf("Note invalide.\n");
                printf("Note du controle %d (0 a 20) : ", j+1);
                scanf("%d", &note);
            }
            tabNoteEleve[i][j] = note;
        }
    }
}

void afficherNote(int tabNoteEleve[30][3], int nbEleve){
    printf("Tableau des notes:\n");
    printf("Eleve  C1  C2  C3\n");
    for (int i = 0; i < nbEleve; i++){
        printf("    %d", i+1);
        for (int j =0; j < 3; j++){
            printf("  %d", tabNoteEleve[i][j]);
        }
        printf("\n");

    }
}

int main(){
    afficherMenu();
    int choix=lireChoix();
    printf("Vous avez choisi : %d\n",choix);
    int nbEleve = saisirNombreEleves();
    int tabNoteEleve[30][3];
    saisirNote(nbEleve,tabNoteEleve);
    afficherNote(tabNoteEleve, nbEleve);
    return 0;
}