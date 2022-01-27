#include <stdio.h>
int main(void)
{
  /*  float sayi;
    float buyuk=0;
    char devam;


    do{

         printf("Girmek istediginiz sayiyi yaziniz..\n");
        scanf(" %f",&sayi);
        if (sayi>buyuk){
            buyuk=sayi;
            printf("Buyuk sayimiz %f\n",buyuk);


        }else if (buyuk<sayi){
        printf("Buyuk sayi degismedi\n");

    } else {
    printf("Lutfen eksi veya 0 sayi girmeyiniz..\n");
    }
    printf("Devam etmek istiyorsaniz E'e tiklayin\n");
     scanf(" %c",&devam);
    }while ( devam =='E'|| devam=='e');
*/

        int sayi;
        int toplam=0;
        int basamak=0;
        char devam;
        devam = 'E';
        int bizimsayi = sayi;


        while(devam == 'E' || devam== 'e' ){
               printf("Lutfen bir sayi giriniz...\n");
                scanf("%d",&sayi);
                bizimsayi = sayi;
            if (sayi>0){

                do{

            toplam += sayi %10;
            basamak ++;

            sayi = sayi / 10;

        }while(sayi>0);
            printf("Sayinin toplami: %d Sayinin basamak sayisi: %d %d ilk girilen sayi\n",toplam,basamak,bizimsayi);
            toplam = 0;
            basamak = 0;
             printf("Devam etmek isterseniz..[E//e] tiklayiniz..\n");
            scanf(" %c",&devam);

 }

        else if (sayi==0){

            toplam += sayi %10;
            basamak ++;

            sayi = sayi / 10;
            printf("Sayinin toplami: %d Sayinin basamak sayisi: %d %d ilk girilen sayi\n",toplam,basamak,bizimsayi);
            printf("Devam etmek isterseniz..[E//e] tiklayiniz..\n");
            scanf(" %c",&devam);
        }
        else {
            printf("0 dan buyuk yazýnýz...");
        }
        }

}
