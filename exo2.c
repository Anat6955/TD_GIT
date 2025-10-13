#include <stdio.h>
#include <math.h>

int main(){
    float m,c,t,t2,n;

    printf("quel est le montant du pret : ");
    scanf("%f",&c);
    printf("quel est le taux d'interet annuel : ");
    scanf("%f",&t2);
    printf("quel est la duree du pret en annees : ");
    scanf("%f",&n);

    t=t2/100;

    m=(c*(t/12))/(1-(pow(1+(t/12),-n*12)));
    printf("m = %f",m);

    return 0;
}