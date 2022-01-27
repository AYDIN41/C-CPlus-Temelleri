#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int sayi;
    float toplam = 0;
    float sayac=0;
    float ortalama=0;
    do{
        printf("Lutfen toplamini ve ortalamasini bulmak istediginiz tam sayiyi giriniz cikmak isterseniz '0' a basiniz\n");
        scanf("%d",&sayi);
        sayac++;
        toplam += sayi;
        if (sayi == 0){
                sayac--;
            break;
        }


    }while(sayi!=0);
    if(sayac == 1){
            ortalama = toplam / sayac;
            printf("%f. sayinin toplami: %f ortalamasi: %f\n",sayac,toplam,ortalama);
        }
        else if(sayac>1){
            ortalama = toplam / sayac;
            printf("%.0f tane sayinin toplami: %.0f ortalamasi: %.2f\n",sayac,toplam,ortalama);
        }
}
