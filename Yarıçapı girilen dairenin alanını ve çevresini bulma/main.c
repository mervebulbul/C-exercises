#include <stdio.h>
#include <stdlib.h>
//yariçapi disaridan girilen bir dairenin çevresini ve alanini bulmak
int main()
{
float r;
float cevre, alan;
int p=3;
    printf("Yaricapi giriniz: \n");
    scanf("%f", &r);
cevre = 2*p*r;
alan = p*r*r;
    printf("Dairenin cevresi: %f , alan: %f", cevre, alan);
    return 0;
}
