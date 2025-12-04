#include "exo1.h"

int main(){
    UTF8();
    int tab[7];
    if (charger("consommation.txt", tab) == 0){
        initialisation_tab(tab);
        printf("\n  ⚠️  Aucune sauvegarde trouvée. ⚠️\n\n");
    }
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
        else if (choix == 3){
            sauvegarder("consommation.txt", tab);
        }
    }

    return 0;
}