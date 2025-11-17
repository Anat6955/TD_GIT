#include <stdio.h>

int main(){
    int n = 0;
    int width = 0;
    int max_height = 0;

    prints("Saisisse une taille n, 5 ≤ n ≤ 10 : ");
    scanf("%d",&n);

    width = n * n;
    max_height = 3 * n - 1; 

    char img[150][50];

    for (int i = 0; i< max_height; i++){
        for (int j = 0; j< width; j++){
            img[i][j]=" ";
        }
    }
}