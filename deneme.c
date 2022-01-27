#include <stdio.h>
int main(void)
{
    char  isim;
    int yas;
    char sonuc;

    printf("Onedio testine hoþgelniz\n");
    printf("Testimizin adý hangi filozofsunuz?\n");
    printf("Isminizi bas harfini giriniz..\n");
    scanf(" %c",&isim);
    printf("Sizin isminiz %c\n",isim);

    printf("Kac yasýndasýnýz?\n");
    scanf("%d",&yas);

    if (yas<21 && yas>0){
            printf("felsefenin anlamýný biliyormunusuz?\n");
            printf("E/H diye cevap veriniz\n");
            scanf(" %c", &sonuc);

            if  ( sonuc == 'E'){

                    printf("Inancýnýz tam mý?\n");
                    printf("E/H diye cevap veriniz\n");
                    scanf(" %c", &sonuc);


            } else if (sonuc == 'H') {

                    printf("Inancýnýz tam mý?\n");
                    printf("E/h diye cevap veriniz\n");
                     scanf(" %c", &sonuc);

            } if (sonuc == 'E'){
                printf("Mevlanasýn");
                }else if (sonuc == 'H'){
                        printf("Nicesin");
                } else
                printf(" Sen Agnostiksin!\n");
                printf(" Tester : HAYIR DEGÝLÝM\n");
                printf(" Yazilimci : CIKAR GOSTER\n");


    }
    return 0;
}
