#include <stdio.h>
#include <stdlib.h>

int main()
{
void denklemiyaz(float dizi[], int derece)
{

int i,katsayi;
int sayi;
printf("Denklemin derecesini giriniz: \n");
scanf("%d", &derece);
for(i=0; i<=derece; i++)
{
    printf("%d dereceli terimin katsayisini giriniz: \n",dizi[i]);
    scanf("%d", &katsayi);
}
printf("Denklemde yerine koymak istediginiz sayiyi giriniz: \n");
scanf("%d", &sayi);
printf("\nGirdiginiz denklem: \n\n");
if(i!=derece)
{
    printf("%d*x^%d + ", dizi[i], derece);
}
else
{
    printf("%d*x^%d", dizi[i], derece);
}
}
float yerinekoy(float dizi[],float sayi, int derece)
{
    float sonuc=0;
    int i;
    for(i=0;i<=derece;i++)
    {
        sonuc=sonuc+dizi[i]*pow(sayi,i);
    }
denklemiyaz(dizi,derece);
printf("sonuc= %d\n\n",yerinekoy(dizi,sayi,derece));
    return sonuc;
}

}
