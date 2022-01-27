#include <stdio.h>
int main(void)
{
    int  sube;
    int  ogrencisayisi;
    char ogrenci[50][50][50];
    printf("Lutfen sube sayisini yaziniz..\n");
    scanf ("%d",&sube);
    printf("Lutfen ogrenci sayisini sayisini yaziniz..\n");
    scanf("%d",&ogrencisayisi);
 for (int i = 0;i<sube;i++){
    for (int j = 0;j<ogrencisayisi;j++){
        printf("%d sinifdaki %d numarali ogrenciyi giriniz..\n",i+1,j+1);
        scanf("%s",ogrenci[i][j]);
    }

 }
 for (int i = 0;i<sube;i++){
    for (int j = 0;j<ogrencisayisi;j++){
        printf("%d sinifdaki %d numarali ogrenci : %s \n",i+1,j+1,ogrenci[i][j]);
    }

 }
}
