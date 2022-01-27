#include <stdio.h>
int main(void)
{
 /*   double sayi1,sayi2,sayi3,toplam,carpma,ortalama,cikarma,kucuk,buyuk;
    printf("Lutfen 3 sayi giriniz\n");
    scanf("%lf %lf %lf",&sayi1,&sayi2,&sayi3);

    toplam = sayi1+sayi2+sayi3;
    carpma = sayi1*sayi2*sayi3;
    ortalama  = (sayi1+sayi2+sayi3)/3;
    cikarma = sayi1-sayi2-sayi3;

    kucuk = sayi1;
    if (sayi2 < kucuk){
            kucuk = sayi2;
    }
    if (sayi3 < kucuk){
            kucuk = sayi3;
    }

    buyuk = sayi1;
    if (sayi2 > buyuk){
            buyuk = sayi2 ;
    }
    if (sayi3 > buyuk){
            buyuk = sayi3 ;
    }

    printf(" toplama:  %lf carpma: %lf ortalama: %lf cikarma %lf\n",toplam,carpma,ortalama,cikarma);
    printf(" kucuk : %lf \n",kucuk);
    printf("buyuk: %lf",buyuk);

*/

    int sayi;
    printf("Lutfen sayi giriniz\n");
    scanf("%d",&sayi);

    if (sayi % 2 == 0){
            printf("%d cift sayidir",sayi);
    }
    else{
            printf("%d tek sayidir",sayi);
    }


    return 0 ;
}
