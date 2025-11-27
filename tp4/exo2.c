#include <stdio.h>

void afficher_menu(){
    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1 - Faire un retrait\n");
    printf("2 - Quitter\n");
}

int saisir_montant(){
    int montant = 0;
    printf("Montant a retirer (il doit etre compris entre 5 est 1000 et doit etre multiple de 5) : ");
    scanf("%d",&montant);
    return montant;
}

int montant_valide(int montant){
    int oui = 0;
    if (montant<5 || montant >1000 || montant%5 != 0){
        oui = 0;
    }
    else{
        oui = 1;
    }
    return oui;
}

void calcul_distribution(int montant){

}

int main (){
    int choix = 1;
    while(choix == 1){
        afficher_menu();
        printf("Votre choix : ");
        scanf("%d",&choix);
        if (choix == 1 ){
            int montant = 0;
            montant = saisir_montant();
            int oui = 0;
            while (oui == 0){
                oui = montant_valide(montant);
            }
            
        }
        else if (choix == 2){
            return 0;
        }
        else{
            printf("Choississez entre 1 et 2\n");
            main();
        }
    }
    return 0;
}