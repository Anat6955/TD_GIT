#include <stdio.h>

int main(){
    int nb,s,m,h;
    printf("choississez un nombre de seconde: ");
    scanf("%d",&nb);

    h=nb/3600;
    m=(nb%3600)/60;
    s=(nb%3600)%60;

    printf("%d secondes = %d heures, %d minutes et %d secondes.",nb,h,m,s);
    return 0;
}