#include <stdio.h>

int main() {
    char nom[50];
    nom[50] = '\0';
    printf("Nom ? ");
    scanf("%s", nom); 
    char a = 'b';
    printf("Bonjour %s\n", nom);
    return 0;
}
/*Il faut une fin de chaine de charactere*/