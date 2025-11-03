#include <stdio.h>

// ici le compilateur ne dit malheureusement rien mais il devrait,
// executer pour essayer de comprendre ce qu'il se passe 
int main() {
    int tableau[5];
    int i = 12;
    for (int j = 0; j < 6; j++)
    {
        tableau[j] = 1;
    }
    printf("OK %d\n", tableau[5]);
    return 0;
}
/*Le tableau[5] n'existe pas car la boucle se repete 5 fois en commencant par 0 ce qui fait que elle s'arrete a tableau[4]*/