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
        printf("⚠️ Votre choix doit etre compris entre 1, 2 ou 3.⚠️\n\n");
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
    int choix = -1;
    int quantite = -1;
    while (choix < 0 || choix > 7){
        printf("Quelle categorie voulez vous modifier ?\n\n");
        printf("1. Eau 💧\n");
        printf("2. Café ☕\n");
        printf("3. Bonbons 🍬\n");
        printf("4. Gateau 🍰\n");
        printf("5. Légumes 🥦\n");
        printf("6. Fruits 🍎\n");
        printf("7. Protéines 🍗\n");
        printf("Votre choix : ");
        scanf("%d",&choix);
        if (choix < 0 || choix > 7){
            printf("⚠️ Votre choix doit être compris entre 1 et 7 inclus.⚠️\n\n");
        }
    }
    switch (choix){
        case 1:
            while (quantite < 0){
                printf("Combien d unites a ajouter : ");
                scanf("%d", &quantite);
                if (quantite < 0){
                    printf("⚠️ La quantité doit être superieur ou égal à 0.⚠️\n");
                }
            }
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n\n");
            break;
 
        case 2:
            while (quantite < 0){
                printf("Combien d unites a ajouter : ");
                scanf("%d", &quantite);
                if (quantite < 0){
                    printf("⚠️ La quantité doit être superieur ou égal à 0.⚠️\n");
                }
            }
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n\n");
            break;
 
        case 3:
            while (quantite < 0){
                printf("Combien d unites a ajouter : ");
                scanf("%d", &quantite);
                if (quantite < 0){
                    printf("⚠️ La quantité doit être superieur ou égal à 0.⚠️\n");
                }
            }
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n\n");
            break;
 
        case 4:
            while (quantite < 0){
                printf("Combien d unites a ajouter : ");
                scanf("%d", &quantite);
                if (quantite < 0){
                    printf("⚠️ La quantité doit être superieur ou égal à 0.⚠️\n");
                }
            }
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n\n");
            break;
 
        case 5:
            while (quantite < 0){
                printf("Combien d unites a ajouter : ");
                scanf("%d", &quantite);
                if (quantite < 0){
                    printf("⚠️ La quantité doit être superieur ou égal à 0.⚠️\n");
                }
            }
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n\n");
            break;

        case 6:
            while (quantite < 0){
                printf("Combien d unites a ajouter : ");
                scanf("%d", &quantite);
                if (quantite < 0){
                    printf("⚠️ La quantité doit être superieur ou égal à 0.⚠️\n");
                }
            }
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n\n");
            break;

        case 7:
            while (quantite < 0){
                printf("Combien d unites a ajouter : ");
                scanf("%d", &quantite);
                if (quantite < 0){
                    printf("⚠️ La quantité doit être superieur ou égal à 0.⚠️\n");
                }
            }
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour.\n\n");
            break;
    }
}