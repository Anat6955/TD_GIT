#include <stdio.h>

int main() {
    int a = 2;
    int b = 1;
    int c = a / b;  // crash / comportement indéfini
    printf("%d\n", c);
    return 0;
}
/*Ici on divise par b qui est egale a 0 (c'est pas possible)*/