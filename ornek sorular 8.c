#include <stdio.h>
int main(void)
{
    int sayidizisi[30];
    int istenilensayi=0;
    int toplam = 0,gercektoplam;
    int girilensayi[30];
    int girilendogrusayi[30];
    for(int i=0;i<30;i++){
        printf("Lutfen bir sayi giriniz..\n");
        scanf("%d",&sayidizisi[i]);
        if(sayidizisi[i]>=1000 && sayidizisi[i]<=2000){
            toplam = toplam + sayidizisi[i];
            girilensayi[i] = sayidizisi[i];
           sayidizisi[i] = sayidizisi[i] / 100;
                if(sayidizisi[i] % 10 == 3 || sayidizisi[i] % 10 == 5){
                    istenilensayi++;
                    gercektoplam = toplam;
                    girilendogrusayi[i] = girilensayi[i];
                }
            }
        }
        for(int i = 0;i<30;i++){
                if(girilendogrusayi[i]<=2000 && girilendogrusayi[i] >=1000 ){
                                printf("Girdiginiz dogru sayilar: %d\n",girilendogrusayi[i]);

                }
        }

    printf("1000 - 2000 3 ila 5 e bolunebilen sayilar %d   tanedir toplamlari:%d ",istenilensayi,gercektoplam);
}
