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

int main(){
    afficherMenu();

    int choix=lireChoix();
    printf("Vous avez choisi : %d\n",choix);
    int nbEleve = saisirNombreEleves();

    int tabNoteEleve[30][3];
    saisirNote(nbEleve,tabNoteEleve);

    afficherNote(tabNoteEleve, nbEleve);

    int indiceEleve = 0;
    printf("Choississer un eleve : ");
    scanf("%d", &indiceEleve);
    float moyenne = calculerMoyenneEleve(tabNoteEleve, indiceEleve);
    printf("Sa moyenne est de : %f\n",moyenne);

    float moynneGenerale = 0;
    moynneGenerale = calculerMoyenneGenerale(tabNoteEleve, nbEleve);
    printf("La moyenne generale est de : %f\n", moynneGenerale);

    int meilleureNoteControle = 0;
    int indiceControle = 0;
    printf("Choississer un controle d on vous voulez connaitre la meilleur note : ");
    scanf("%d", &indiceControle);
    meilleureNoteControle = trouverMeilleureNoteControle(tabNoteEleve, indiceControle, nbEleve);
    printf("La meilleure note du controlle %d est : %d\n", indiceControle, meilleureNoteControle);
    return 0;
}