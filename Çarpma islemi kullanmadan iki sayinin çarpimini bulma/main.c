#include <stdio.h>
#include <stdlib.h>
// Çarpma islemi kullanmadan iki sayinin çarpimini bulma
int main()
{
int sayi1,sayi2, i;
int sonuc;
    printf("ilk sayiyi giriniz: ",sayi1);
    scanf("%d", &sayi1);
    printf("ikinci sayiyi giriniz: ", sayi2);
    scanf("%d",&sayi2);
sonuc=0;
for(i=1; i<=sayi1; i++)
{
    sonuc=sonuc+sayi2;
}
printf("Sonuc= %d",sonuc);
    return 0;
}
