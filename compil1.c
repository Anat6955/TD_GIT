#include <stdio.h>

int main() {
    printf("Hello world\n");
    return 0;
}
/*compil1.c: In function 'main':
compil1.c:5:5: error: expected ';' before 'return'
     return 0;
     ^~~~~~

Le probleme vient du fait qu'il manque le point virgule a la fin de la ligne printf("Hello world\n")*/