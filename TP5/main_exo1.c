#include "exo1.h"

int main(){
    UTF8();
    int tab[7];
    int choix = 0;
    while (choix != 3){
        afficher_menu();
        choix = lire_choix();
        initialisation_tab(tab);
        if (choix == 1){
            ajouter_consommation(tab);
        }
    }

    return 0;
}