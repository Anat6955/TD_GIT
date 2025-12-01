#include "exo1.h"

void UTF8(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
}

void afficher_menu(){
    printf("==============================\n");
    printf("  Suivi de consommation\n");
    printf("==============================\n");
    printf("1. Ajouter une consommation\n");
    printf("2. Afficher le resume deu jour\n");
    printf("3. Sauvegarder et quitter\n");
}

int lire_choix(){
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d",&choix);
    if (choix != 1 && choix != 2 && choix != 3){
        printf("Votre choix doit etre compris entre 1, 2 ou 3\n");
    }
    return choix;
}

void initialisation_tab(int tab[]){
    for(int i = 0; i < 7; i++)
    {
        tab[i] = 0;
    }
}

int ajouter_consommation(int tab[]){
    int choix = 0;
    int quantite = 0;
    printf("Quelle categorie voulez vous modifier ?\n\n");
    printf("1. Eau 💧\n");
    printf("2. Cafe ☕\n");
    printf("3. Bonbons 🍬\n");
    printf("4. Gateau 🍰\n");
    printf("5. Legumes 🥦\n");
    printf("6. Fruits 🍎\n");
    printf("7. Proteines 🍗\n");
    printf("Votre choix : ");
    scanf("%d",&choix);
    switch (choix)
    {
        case 1:
            printf("Combien d unites a ajouter : ");
            scanf("%d", &quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n");
            break;
 
        case 2:
            printf("Combien d unites a ajouter : ");
            scanf("%d", &quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n");
            break;
 
        case 3:
            printf("Combien d unites a ajouter : ");
            scanf("%d", &quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n");
            break;
 
        case 4:
            printf("Combien d unites a ajouter : ");
            scanf("%d", &quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n");
            break;
 
        case 5:
            printf("Combien d unites a ajouter : ");
            scanf("%d", &quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n");
            break;
 
        case 6:
            printf("Combien d unites a ajouter : ");
            scanf("%d", &quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n");
            break;
       
        case 7:
            printf("Combien d unites a ajouter : ");
            scanf("%d", &quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n");
            break;
 
    }
}