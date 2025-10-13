#include <stdio.h>
#include <math.h>

int main(){
    float m,c,t,n;

    printf("quel est le montant du pret : ");
    scanf("%f",&c);
    printf("quel est le taux d'interet annuel : ");
    scanf("%f",&t);
    printf("quel est la duree du pret en annees : ");
    scanf("%f",&n);

    m=(c*(t/12))/(1-(pow(1+(t/12),-n*12)));
    printf("m = %f",m);

    return 0;
}