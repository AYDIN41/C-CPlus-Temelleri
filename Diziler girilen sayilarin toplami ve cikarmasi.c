#include <stdio.h>
int main(void)
{
    int girilensayi;
    float sayilar[100],toplama=0,ortalama=0;

    printf("Lutfen bir kaç tane sayiyi hesaplamak istiyorsaniz yazin..\n");
    scanf("%d",&girilensayi);

    while(girilensayi>100 || girilensayi<=0){
        printf("Girdiginiz sayi 1-100 arasinda degildir...\n");
        printf("Lutfen bir kaç tane sayiyi hesaplamak istiyorsaniz yeniden yazin..\n");
        printf("Direk cikmak istiyorsaniz 0 a basiniz..\n");
        scanf("%d",&girilensayi);
        while(girilensayi == 0){
                printf("Cikiyorsunuz\n");
                goto cikis;


        }
    }
    for(int i = 0;i<girilensayi;i++){
        printf("Girdiginiz sayi %d \n",i+1);
        scanf("%f",&sayilar[i]);
        toplama = toplama + sayilar[i];
    }
    ortalama = toplama / girilensayi;
    printf("Girilen sayilarin toplami %.2f \n",toplama);
    printf("Girilen sayilarin ortalamasi %.2f",ortalama);
    cikis:
        return 0;
}
