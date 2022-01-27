#include <stdio.h>
int main(void)
{
    int toplam=0;
    int kalan1 = 0, kalan2 = 0;
    int sayi;

    /*for(int i = 10;i<=99;i++){
        sayi = i;
        kalan1 =  sayi % 10;
        kalan2 = sayi / 10;
        toplam = kalan1 + kalan2;
        printf("%d. sayinin rakamlari toplami %d..\n",i,toplam);
    }*/
    for(int i = 10;i<=99;i++){
        sayi = i;
        kalan1 =  sayi % 10;
        kalan2 = sayi / 10;
        toplam = kalan1 + kalan2 + toplam;

    }
     printf("Sayilarin rakamlari toplami %d..\n",toplam);
}
