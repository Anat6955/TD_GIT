#include <stdio.h>

void afficher_menu(){
    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1 - Faire un retrait\n");
    printf("2 - Quitter\n");
}


int main (){
    int choix = 1;
    while(choix == 1){
        afficher_menu();
        printf("Votre choix : ");
        scanf("%d",&choix);
        if (choix != 1 || choix != 2){
            printf("Choississez entre 1 et 2\n");
            main();
        }
    }
    

    return 0;
}