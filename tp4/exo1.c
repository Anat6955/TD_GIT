#include <stdio.h>

void afficherMenu(){
    printf("\n==== GESTION DE NOTES ====\n");
    printf("1. Saisir le nombre d eleves\n");
    printf("2. Saisir les notes des eleves\n");
    printf("3. Afficher toutes les notes\n");
    printf("4. Afficher la moyenne d'un eleve\n");
    printf("5. Afficher la moyenne generales\n");
    printf("6. Afficher la meilleur note de chaque controle\n");
    printf("0. Quitter\n\n");
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
    printf("nombre eleves %d\n", nbEleve);
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

float calculerMoyenneEleve(int tabNoteEleve[30][3], int indiceEleve){
    float moyenne = 0;
    for (int i = 0; i < 3; i++){
        moyenne += tabNoteEleve[indiceEleve-1][i];
    }
    moyenne = moyenne/3;
    return moyenne;
}

float calculerMoyenneGenerale(int tabNoteEleve[30][3], int nbEleve){
    float moyenne = 0;
    for (int i = 1; i <= nbEleve; i++){
        moyenne += calculerMoyenneEleve(tabNoteEleve, i);
    }
    moyenne = moyenne / nbEleve;
    return moyenne;
}

int trouverMeilleureNoteControle(int tabNoteEleve[30][3], int indiceControle, int nbEleve){
    int meilleureNote = tabNoteEleve[0][indiceControle-1];
    for (int i = 1; i < nbEleve; i++){
        if (meilleureNote < tabNoteEleve[i][indiceControle-1]){
            meilleureNote = tabNoteEleve[i][indiceControle-1];
        }
    }
    return meilleureNote;
}

void afficherMeilleuresNotes(int tabNoteEleve[30][3], int nbEleve){
    for (int i = 0; i < 3; i++){
        printf("Meilleur note au controle %d : %d\n",i+1,trouverMeilleureNoteControle(tabNoteEleve, i, nbEleve));
    }
}

int main(){
    int nbEleve = 0;
    int tabNoteEleve[30][3];
    int indiceEleve = 0;

    while (1){
        afficherMenu();

        int choix = lireChoix();
        printf("Vous avez choisi : %d\n", choix);

        switch (choix)
        {
        case 1:
            nbEleve = saisirNombreEleves();
            break;

        case 2:
            saisirNote(nbEleve, tabNoteEleve);
            break;

        case 3:
            afficherNote(tabNoteEleve, nbEleve);
            break;

        case 4:
            printf("Choisissez un eleve : ");
            scanf("%d", &indiceEleve);
            printf("Sa moyenne est de : %f\n",
            calculerMoyenneEleve(tabNoteEleve, indiceEleve));
            break;

        case 5:
            printf("La moyenne generale est : %f\n",
            calculerMoyenneGenerale(tabNoteEleve, nbEleve));
            break;

        case 6:
            afficherMeilleuresNotes(tabNoteEleve, nbEleve);
            break;

        case 0:
            return 0;
        }
    }
    return 0;
}