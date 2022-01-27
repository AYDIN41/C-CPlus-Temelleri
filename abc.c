#include <stdio.h>
int main(void)
{
    printf("1-Baslangýc\t 5 Tl\n");
    printf("2-Ara sýcak\t 5.5 Tl\n");
    printf("3-Ana yemek\t 15 Tl\n");
    printf("4-Icecek\t 1.5 Tl\n");
    printf("5-Tatli\t\t  7.5 Tl\n");
    printf("6-Special\t 50 Tl\n");
    int numara;
    float toplam,porsiyon,eksi;
    double tutar;


menu:    printf("Secmek istediðiniz menunun numarasini yaziniz\n");
        printf("Siparisinizi sonlandýrmak için 0'a basiniz...\n");
        printf("Siparis iptal etmek isterseniz 7-12'e tiklayin\n");
        scanf("%d",&numara);
           if (numara == 0){
                goto cikis;
        }

        if (numara<13 && numara>6 ){
            printf("Porsiyon sayinizi yaziniz\n");
            scanf("%f",&porsiyon);

     switch (numara){
    case 7:
        if (porsiyon>0){
        eksi -= porsiyon * 5;
        printf("Sectiginiz urun 5 tl\n");
        }
        else
            printf("0'dan büyük porsiyon isteyiniz");        break;
    case8:
        if (porsiyon>0){
        eksi -=  porsiyon * 5.5;
        printf("Sectiginiz urun 5.5 tl\n");
        }
        else
            printf("0'dan büyük porsiyon isteyiniz");
        break;
    case 9:
        if (porsiyon>0){
        eksi -= porsiyon *15;
        printf("Sectiginiz urun 5.5 tl\n");
        }
        else
            printf("0'dan büyük porsiyon isteyiniz");
        break;
    case 10:
        if (porsiyon>0){
        eksi -= porsiyon * 1.5;
        printf("Sectiginiz urun 1.5 tl\n");
        }
         else
            printf("0'dan büyük porsiyon isteyiniz");
        break;
    case 11:
        if (porsiyon>0){
         eksi -= porsiyon * 7.5;
        printf("Sectiginiz urun 7.5 tl\n");
        }
        else
            printf("0'dan büyük porsiyon isteyiniz");
        break;
    case 12:
        if (porsiyon>0){
        eksi -= porsiyon * 50;
        printf("Sectiginiz urun 50 tl\n");
        }
        else
            printf("0'dan büyük porsiyon isteyiniz\n");
        break;
    default:
        printf("Lurfen 7-12 arasýnda secim yapýnýz..\n");
        break;
    }
        }

     else if  (numara<7 && numara>0 ){
            printf("Porsiyon sayinizi yaziniz\n");
            scanf("%f",&porsiyon);


    switch (numara){
    case 1:
        if (porsiyon>0){
        toplam +=  porsiyon * 5;
        printf("Sectiginiz urun 5 tl\n");
        }
        else
            printf("0'dan büyük porsiyon isteyiniz");        break;
    case 2:
        if (porsiyon>0){
        toplam += porsiyon * 5.5;
        printf("Sectiginiz urun 5.5 tl\n");
        }
        else
            printf("0'dan büyük porsiyon isteyiniz");
        break;
    case 3:
        if (porsiyon>0){
        toplam += porsiyon *15;
        printf("Sectiginiz urun 5.5 tl\n");
        }
        else
            printf("0'dan büyük porsiyon isteyiniz");
        break;
    case 4:
        if (porsiyon>0){
        toplam += porsiyon * 1.5;
        printf("Sectiginiz urun 1.5 tl\n");
        }
         else
            printf("0'dan büyük porsiyon isteyiniz");
        break;
    case 5:
        if (porsiyon>0){
         toplam += porsiyon * 7.5;
        printf("Sectiginiz urun 7.5 tl\n");
        }
        else
            printf("0'dan büyük porsiyon isteyiniz");
        break;
    case 6:
        if (porsiyon>0){
        toplam += porsiyon * 50;
        printf("Sectiginiz urun 50 tl\n");
        }
        else
            printf("0'dan büyük porsiyon isteyiniz\n");
        break;
    default:
        printf("Lurfen 1-6 arasýnda secim yapýnýz..\n");
        break;
    }
     }
       printf("Toplam tutariniz %.2f\n" ,toplam);
       printf("Toplam cikarilan tutariniz %.2f\n" ,eksi);

        goto menu;
        cikis:
                     printf("Toplam tutariniz %.2f\n" ,toplam);
                     printf("Toplam cikarilan tutariniz %.2f\n" ,eksi);
                     printf("Toplam tutariniz %.2lf\n",toplam+eksi );


                    printf("Tesekkurler..\n");





        return 0;
}
