#include <stdio.h>

int main(){
    int n = 0;
    int width = 0;
    int max_height = 0;

    prints("Saisissé une taille n, 5 ≤ n ≤ 10 : ");
    scanf("%d",&n);

    width = n * n;
    max_height = 3 * n - 1; 
}