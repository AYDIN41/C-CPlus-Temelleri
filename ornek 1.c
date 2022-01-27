#include <stdio.h>
#include <stdlib.h>
struct calisanbilgisi{
    char makam[50];
    char calistigibirim [50];
    float maas;
    int calistigiyil;
};
struct calisan{
    char isim[50];
    char soyisim[50];
    int yas;
    struct calisanbilgisi bilgi;

};
void calisanlaribilgilendirme (struct calisan emirhan){
    printf("%s %s %d %s %s %.2f %d",emirhan.isim,emirhan.soyisim,emirhan.yas,emirhan.bilgi.makam,emirhan.bilgi.calistigibirim,emirhan.bilgi.maas,emirhan.bilgi.calistigiyil);
}
int main(void)
{
    struct calisan calisanibulma[50];
    int decision;
    printf("Kac tane calisani gormek istiyorsunuz..\n");
    scanf("%d",&decision);
    for(int i = 0;i<decision;i++){
        printf("%d Numarali calisani girin\n",i+1);
        scanf("%s %s %d %s %s %f %d",&calisanibulma[i].isim,&calisanibulma[i].soyisim,&calisanibulma[i].yas,&calisanibulma[i].bilgi.makam,&calisanibulma[i].bilgi.calistigibirim,&calisanibulma[i].bilgi.maas,&calisanibulma[i].bilgi.calistigiyil);
    }
    printf("Degerler gosteriliyor\n");
    for (int i = 0;i<decision;i++){
        calisanlaribilgilendirme(calisanibulma[i]);
    }




    /*strcpy (calisan1.isim,"Emirhan");
    strcpy (calisan1.soyisim,"Aydin");
    calisan1.yas = 21;
    strcpy (calisan1.bilgi.makam,"Ogrenci");
    strcpy (calisan1.bilgi.calistigibirim,"YBS");
    calisan1.bilgi.maas = 2050.25;
    calisan1.bilgi.calistigiyil = 2;*/

}
