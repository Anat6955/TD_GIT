#include <stdio.h>

int main(){
    int nb,s,m,h;
    printf("choississez un nombre de seconde");
    scanf("%d",nb);

    h=nb%3600;
    m=(nb-h)%60;
    s=nb-h-m;

    printf("%d secondes = %d heures, %d minutes et %d secondes.",nb,h,m,s);
    return 0;
}