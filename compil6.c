#include <stdio.h>

int main() {
    int x = 10;
    if (x == 5) {
        printf("x vaut 5\n");
    }
    return 0;
}
/*Le probleme vient du fait que pour comparer il faut faire x==5 et pas x=5*/