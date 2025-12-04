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

void afficher_resume(int tab[]){
    printf("========== Resume du jour ==========\n");
    printf("Eau       : %d  💧   ",tab[0]);
    affiche_barre(tab[0], 10);
    printf("Cafe      : %d  ☕   ",tab[1]);
    affiche_barre(tab[1], 10);
    printf("Bonbons   : %d  🍬   ",tab[2]);
    int b = humeur_bonbon(tab);
    switch (b)
    {
    case 0:
        printf("😇   ");
        break;
    case 1:
        printf("🙂   ");
        break;
    case 2:
        printf("😕   ");
        break;
    case 3:
        printf("😈   ");
        break;
    }
    affiche_barre(tab[2], 10);
    printf("Gateau    : %d  🍰   ",tab[3]);
    affiche_barre(tab[3], 10);
    printf("Legumes   : %d  🥦   ",tab[4]);
    int l = humeur_legume(tab);
    switch (l)
    {
    case 0:
        printf("😭   ");
        break;
    case 1:
        printf("🙂   ");
        break;
    case 2:
        printf("😎   ");
        break;
    case 3:
        printf("😎   ");
        break;
    }
    affiche_barre(tab[4], 10);
    printf("Fruits    : %d  🍎   ",tab[5]);
    int f = humeur_fruit(tab);
    switch (f)
    {
    case 0:
        printf("😢   ");
        break;
    case 1:
        printf("🙂   ");
        break;
    case 2:
        printf("😀   ");
        break;
    case 3:
        printf("😀   ");
        break;
    }
    affiche_barre(tab[5], 10);
    printf("Proteines : %d  🍗   ",tab[6]);
    affiche_barre(tab[6], 10);
    printf("====================================\n\n");
}

int sauvegarder(char nom[], int tab[]){
    FILE * f = fopen(nom,"w+");
    if (f == NULL){
        return 0;
    }
    fprintf(f,"%d %d %d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6]);
    fclose(f);
    return 1;
}

int charger(char nom[], int tab[]){
    FILE * f = fopen(nom,"r");
    if (f == NULL){
        return 0;
    }
    fscanf(f,"%d %d %d %d %d %d %d", &tab[0], &tab[1], &tab[2], &tab[3], &tab[4], &tab[5], &tab[6]);
    
    fclose(f);
    return 1;
}

int humeur_bonbon(int tab[]){
    int n = tab [2];
    if (n <= 3){
        return 0;
    }
    else if (n <= 7){
        return 1;
    }
    else if (n <= 12){
        return 2;
    }
    else{
        return 3;
    }
}

int humeur_legume(int tab[]){
    int n = tab [4];
    if (n <= 3){
        return 0;
    }
    else if (n <= 7){
        return 1;
    }
    else if (n <= 12){
        return 2;
    }
    else{
        return 3;
    }
}

int humeur_fruit(int tab[]){
    int n = tab [5];
    if (n <= 3){
        return 0;
    }
    else if (n <= 7){
        return 1;
    }
    else if (n <= 12){
        return 2;
    }
    else{
        return 3;
    }
}

int affiche_barre(int val, int max){
    if (max <=  0){
        max = 1;
    }
    if (max < val){
        val = max;
    }
    int case_affiche = (val*10)/max;
    for (int i = 0; i < 10; i++){
        if (case_affiche > 0){
            printf("█");
            case_affiche -= 1;          
        }
        else{
            printf("░");
        }
    }
    printf("\n");

}