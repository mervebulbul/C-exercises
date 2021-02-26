#include <stdio.h>
#include <stdlib.h>
//disardan girilen n sayisina kadar olan sayilarin karelerinin toplamini bulan program
int main()
{
int sayi;
int sonuc, i;
    printf("sayi giriniz: ",sayi);
    scanf("%d", &sayi);
sonuc=0;
for(i=0;i<=sayi; i++)
{
    sonuc= sonuc + i*i;
}
printf("sonuc: %d",sonuc);
    return 0;
}
