#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10, i++) {
        printf("%d\n", i);
    }
    return 0;
}
/*Il y a une boucle infinie car i < 10 est toujours vrai*/