#include <stdio.h>
#include <stdlib.h>
//disardan girilen n sayisina kadar olan tek tam sayilarin toplamini bulma
int main()
{
int i, n;
int sonuc;
    printf("sayi giriniz: ",n);
    scanf("%d", &n);
sonuc=0;
i=1;
while(i<=n)
{
    sonuc=sonuc+i;
    i=i+2;
}

printf("%d e kadar olan tek sayilarin toplami: %d",n,sonuc);
    return 0;
}
