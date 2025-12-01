#include "exo1.h"

int main(){
    int tab[7];
    int choix = 0;
    while (choix != 3){
        afficher_menu();
        choix = lire_choix();
    }

    return 0;
}