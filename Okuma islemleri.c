#include <stdio.h>
int main(void)
{
    FILE *dosya;
    int stok [50];
    char urunismi[50][50];
    char urunadet[50][50];
    int i = 0;

    if((dosya = fopen("C:\\Users\\asus\\Documents\\Deneme\\Cprogramlamadenemesi.txt","r"))!= NULL){
            /*fgets(karakter,50,dosya);
            printf("%s",karakter);
        karakter = fgetc(dosya);
        while (karakter != EOF){
            printf("%c",karakter);
            karakter = fgetc(dosya);*/
            while (!feof(dosya)){
                fscanf(dosya,"%s %d %s",&urunismi[i],&stok[i],&urunadet[i]);
                i++;
            }
            for(int b=0;b<i;b++){
                printf("%d %s %d %s\n",b+1,urunismi[b],stok[b],urunadet[b]);
            }

    }else{
    printf("Dosya bulanamadi..\n");
    }
}
