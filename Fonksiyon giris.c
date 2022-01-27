#include <stdio.h>
#include<stdlib.h>
 void takimlar(){
     printf("Besiktas\n");
     printf("Fner\n");
     printf("Galatasaray\n");
     printf("Trabzonspor\n");

    }
    int sayininikikati(int sayi){
        printf("%d",sayi*2);
     return sayi*2;
    }
    float sayininkarekokunual(int sayi){
    return sqrt(sayi);
    }
    double sayikarealma(float sayi){
    return sayi*sayi;
    }
    char karakterinilkharfi(char dizi[]){
    return dizi[0];
    }
    void bosluk(){
    printf("\n");
    }
    int sifirdanbuyuk(int sayi){
     if (sayi>0){
        return 0;
     }else{
      return 1;
     }
    }
    #define buyuksayi(sayi1,sayi2) (sayi1>sayi2) ? sayi1 : sayi2
    #define saatogrenme(karakter) (karakter == 'E' || karakter == 'e') ? __TIME__ : "Yanlis karakter girdiniz"
    #define toplama(sayi1,sayi2) (sayi1+sayi2)
    #define sayiveyakarakter(karakter) (karakter=='k') ? karakter : 'A'
int main(void)
{


    char karakter='a';

    if (sayiveyakarakter(karakter)){
        printf("%c",sayiveyakarakter(karakter));
    }else{
     printf("%c",sayiveyakarakter(karakter));
    }
{

   /*takimlar();

      takimlar();

         takimlar();
   printf("%d",sayininikikati(7));
    sayininikikati(6);
    printf("%f",sayininkarekokunual(5));

    printf("%lf",sayikarealma(5.2));
    printf("%c",karakterinilkharfi("Aydin"));
    bosluk();
        printf("%c",karakterinilkharfi("Aydin"));
    bosluk();
    printf("%c",karakterinilkharfi("Aydin"));
    int sayi;
    printf("Lutfen sayiniz pozitif mi degil mi yaziniz\n");
    scanf("%d",&sayi);
    if(sifirdanbuyuk(sayi) == 0){
        printf("%d pozitiftir..",sayi);
    }
    if(sifirdanbuyuk(sayi) == 1){
        printf("%d negatif",sayi);
    }
    printf("%d",buyuksayi(9,7));*/
    /*char kullanicikarakter;
    printf("Saati ogrenmek istiyorsaniz lutfen 'E' ye tiklayin..\n");
    scanf(" %c",&kullanicikarakter);
    if(saatogrenme(kullanicikarakter)){
        printf("%s",saatogrenme(kullanicikarakter));
    }else{
    printf("Yanlis bastiniz..");*/
    //printf("%f",toplama(5.5,14));

    }
}
