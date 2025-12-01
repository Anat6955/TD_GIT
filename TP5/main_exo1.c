#include "exo1.h"

int main(){
    UTF8();
    int tab[7];
    initialisation_tab(tab);
    int choix = 0;
    while (choix != 3){
        afficher_menu();
        choix = lire_choix();

        if (choix == 1){
            ajouter_consommation(tab);
        }
        else if (choix == 2){
            afficher_resume(tab);
        }
    }

    return 0;
}