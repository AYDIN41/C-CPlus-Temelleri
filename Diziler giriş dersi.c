#include <stdio.h>
int main(void)
{
   /* int sayilar[] = {1,10,15,20,25};
    for (int i=0;i<5;i++){
        printf("%d\n",sayilar[i]);
    }
    int sayilar[] = {1,10,15,20,25};
    printf("%d\n",sayilar[0]);
    printf("%d\n",sayilar[1]);
    printf("%d\n",sayilar[2]);
    printf("%d\n",sayilar[3]);
    printf("%d\n",sayilar[4]);

    float sayilar[5];

    for (int i=0;i<5;i++){
         printf("Lutfen bir sayi giriniz..\n");
        scanf("%f",&sayilar[i]);
        printf("%f\n",sayilar[i]);

    }
    char sayilar[4] = {'C','A','N','\0'};
    for (int i=0;i<4;i++){

    printf("%c",sayilar[i]);
    }

    char takim [10];
    char evet;

    do{
        printf("Girmek istediginiz takim ismini yaziniz...\n");
        scanf("%s",&takim);
        printf("%s\n",takim);
        printf("Devam etmek istiyormusunuz?\n");
        scanf(" %c",&evet);
    }while(evet=='E' || evet== 'e');*/

    char takim [7];

    for (int i=0;i<6;i++){
        printf("Girmek istediginiz harfleri yaziniz..\n");
        scanf(" %c",&takim[i]);

    }
    printf("%s",takim);
}
