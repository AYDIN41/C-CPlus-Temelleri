#include <stdio.h>
#include <stdlib.h>
enum hafta{Pazartesi=1,Sali,Carsamba,Persembe,Cuma,Cumartesi,Pazar};
enum aylar {Ocak=1,Mart=3,Haziran=6,Aralik=12};
enum macsonu {kazandi=0,kaybetti};
#define PI 3.14
enum ogrencikaydi {Aktif,Donmus=1,Silinmis=1};
int main()
{
    enum macsonu mac;
    mac=0;
    (mac==kazandi) ? printf("Kazanmissiniz") : printf("Kaybettiniz");

/*
    enum ogrencikaydi kayit;
    kayit=Donmus;
    if(kayit==0){
        printf("Ogrenci gecti..");
    }
     if(kayit==1){
        printf("Ogrenci kaldi..");
    }



    for(int i=Ocak;i<=Aralik;i++){
        printf("%d\t",i);
        if(i==1){
            printf("Ay: %d . :Ocak\n",i);
        }
        if(i==2){
            printf("Ay: %d . :Subat\n",i);
        }
        if(i==3){
            printf("Ay: %d . :Mart\n",i);
        }
    }
    //printf("%f\n",PI);
 //   enum hafta gun;
 //   gun = Sali;
//    printf("%d",gun);*/
    return 0;
}
