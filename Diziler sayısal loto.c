#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 /*   int rastgele;
   srand(time(NULL));
   int loto[49] = {0};
    printf("Sayilar uretilmeye baslaniyor..\n");
   for (int i = 0;i<6;i++){

        rastgele = 1 + rand() % 49;
    while(loto[rastgele-1]==1){
        rastgele = 1 + rand() % 49;
    }
    loto[rastgele-1]=1;
    printf("%d ",rastgele);
   }
   printf("\n");
   for (int i = 0;i<49;i++){
    if(loto[i]==1){
        printf("%d ",i+1);
    }
   }





   int loto[49] = {0};

    for (int i=0;i<49;i++){
        printf("%d ",loto[i]);
    }
*/
 char sifre[80];
 char sifredogrulama[80];
 int i,yanlis;


    while(1){
        i=0;
        yanlis= 0;

    printf("Lutfen birinci sifrenizi giriniz..\n");
    scanf("%s",sifre);
    printf("Lutfen ikinci sifrenizi giriniz..\n");
    scanf("%s",sifredogrulama);

        while(!(sifre[i]=='\0' && sifredogrulama[i] == '\0'))
        if(sifre[i]!=sifredogrulama[i]){
            printf("Yazdiginiz sifreler esit degil\n");
            yanlis=1;
            break;

            }else{
                 i++;
            }
            if (yanlis==0){
                     printf("Yazdiginiz sifreler dogru");
            break;

            }

    }






}
