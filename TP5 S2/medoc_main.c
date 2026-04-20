#include "medoc.h"

int main() {
    int N = 80;
    Medicament Tab[80];

    saisir(Tab,N);

    triParDate(Tab,N);

    triParNom(Tab,N);
    
    int pos = rechercheDichotomique(Tab, "paracetamol",N);

    if(pos != -1) {
        printf("\nLe medicament 'paracetamol' est trouve a la position %d\n", pos);
    } else {
        printf("\nLe medicament 'paracetamol' n'existe pas\n");
    }

    Medicament cher = plusCher(Tab, N);
    printf("Le medicament le plus cher est %s",cher.nom);
    return 0;
}