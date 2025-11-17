#include <stdio.h>

int main(){
    int n = 0;
    int width = 0;
    int max_height = 0;

    printf("Saisisse une taille de n entre 5 et 10 : ");
    scanf("%d",&n);

    width = n * n;
    max_height = 3 * n - 1; 

    char img[150][50];

    for (int i = 0; i< max_height; i++){
        for (int j = 0; j< width; j++){
            img[i][j]=' ';
        }
    }

    for (int i = 0; i< max_height; i++){
        for (int j = 0; j< width; j++){
            printf("%c",img[i][j]);
        }
        printf("\n");
    }

}