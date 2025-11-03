#include <stdio.h>

int main() {
    printf("Test\n");
    return 0;
}
/*compil4.c:3:10: error: expected '=', ',', ';', 'asm' or '__attribute__' before '{' token
 int main {
          ^
Le probleme vient du fait qu'il manque les parentheses apres le main*/