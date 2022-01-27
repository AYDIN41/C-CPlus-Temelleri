#include <stdio.h>
#include <string.h>
int main(void)
{
    char isim[50];
    printf("Lutfen bir isim giriniz..\n");
    //scanf("%s",&isim);
    gets(isim);
    int sayac=0;
    int uzunluk = strlen(isim);
    //printf("%s kelimesinin uzunlugu %d",isim,uzunluk);
  /*  for(int i = 0;i<uzunluk;i++){
        printf("%c",isim[i]);
    }
    printf("\n");
    for(int i=uzunluk-1;i>=0;i--){
        printf("%c",isim[i]);
    }*/
    if(uzunluk>=10){

        //printf("%s",&isim);
        for(int i = 0;i<uzunluk;i++){
            printf("*");
            sayac++;
            if(sayac==uzunluk){
                printf("\nIsim sayiniz gecerli\n");
            }
        }
    }else{
    printf("Isim sayiniz gecerli degil\n");
    }
}
