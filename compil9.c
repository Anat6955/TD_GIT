#include <stdio.h>

int main() {
    char s[6] = "Hello";
    printf("%s\n", s);
    return 0;
}
/*compil9.c: In function 'main':
compil9.c:4:17: warning: initializer-string for array of chars is too long
     char s[3] = "Hello";
                 ^~~~~~~
Le probleme vient du fait que hello fait 5 characteres et la variable s a un max de 3 charactere*/