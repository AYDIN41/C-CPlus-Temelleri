#include <stdio.h>
int main(void)
{
    int sayi1,sayi2,secme;
    int toplama,cikarma,carpma;
    do{
        printf("1 Toplama\t 2-Cýkarma\t 3 Carpma \n lutfen birini seciniz\n");
        scanf("%d",&secme);
        switch(secme){
    case 1 :
        printf("Lutfen 2 sayi giriniz\n");
        scanf("%d %d",&sayi1,&sayi2);
        printf("%d + %d : %d \n",sayi1,sayi2,sayi1+sayi2);
        break;
    case 2 :
        printf("Lutfen 2 sayi giriniz\n");
        scanf("%d %d",&sayi1,&sayi2);
        printf("%d - %d : %d \n",sayi1,sayi2,sayi1-sayi2);
        break;
    case 3 :
        printf("Lutfen 2 sayi giriniz\n");
        scanf("%d %d",&sayi1,&sayi2);
        printf("%d * %d : %d \n",sayi1,sayi2,sayi1*sayi2);
        break;
        }
    }while(secme != 4);  /* while(secme<4 ||  secme>0);*/
}
