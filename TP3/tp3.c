#include <stdio.h>

int main(){
    int n = 0;
    int width = 0;
    int max_height = 0;
    int mid = 0;
    char img[50][150];

    printf("Saisisse une taille de n entre 5 et 10 : ");
    scanf("%d",&n);

    width = n * n;
    max_height = 3 * n - 1; 
    mid = width / 2;
    printf("%d\n%d\n%d\n",width, max_height, mid);

    for (int i = 0; i< max_height; i++){
        for (int j = 0; j< width; j++){
            img[i][j]=' ';
        }
    }

    for(int i=0; i<width;  i++){
        img[n+1][i]='_';
    }

    for (int i = 0; i<= n+1; i++){
        for (int j = 0; j<i-1; j++){
            img[i][mid+j]='A';
            img[i][mid-j]='A';
        }  
    }

    for (int i = 0; i<= n; i++){
        for (int j = 0; j<i-1; j++){
            img[i+1][mid+j]='S';
            img[i+1][mid-j]='S';
        }  
    }


    for (int i = 0; i< max_height; i++){
        for (int j = 0; j< width; j++){
            printf("%c",img[i][j]);
        }
        printf("\n");
    }

}