#include <stdio.h>
int main(void)
{
    FILE *dosyaAdresi;
    dosyaAdresi = fopen("C:\\Users\\asus\\Documents\\Deneme\\Cprogramlamadenemesi.txt","a");
    //fputc('N',dosyaAdresi);
   /* fprintf(dosyaAdresi,"\n");
    fputs("Emirhan41",dosyaAdresi);
    fclose(dosyaAdresi);*/
    /*char isim[50];
    printf("Lutfen isminizi girin\n");
    scanf("%s",&isim);
    fprintf(dosyaAdresi,"\n");
    fprintf(dosyaAdresi,"Sizin adiniz: %s",isim);*/
  /*  int sayi1,sayi2;
    int toplam;

    fprintf(dosyaAdresi,"\n");
    printf("Lutfen toplamini gormek istediginiz 2 sayi giriniz.\n");
    scanf("%d%d",&sayi1,&sayi2);
    toplam = sayi1 + sayi2;
    fprintf(dosyaAdresi,"%d + %d nin toplami = %d",sayi1,sayi2,toplam);*/
    char isim[20];
    char soyisim [25];
    int yas;
    float maas;
    printf("Lutfen is bilgilerinizi girin..\t Isim Soyisim Yas Maas\n");
    scanf("%s %s %d %f",&isim,&soyisim,&yas,&maas);
    printf("isim:%s soyisim: %s yas: %d maas: %.2f",isim,soyisim,yas,maas);
    fprintf(dosyaAdresi,"Calisan Bilgileri\n");
    fprintf(dosyaAdresi,"isim:%s soyisim: %s yas: %d maas: %.2f",isim,soyisim,yas,maas);

}
