#include <stdio.h>

int main() {
    int tab[10];
    
    for (int i = 0; i < 10; i++) {
        tab[i] = i;  
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n",tab[i]);  
    }
    printf("fait\n");
    return 0;
}
/*L'erreur vient du fait que tab aller j'usqu'a 5 et les boucle jusqu'a 10*/