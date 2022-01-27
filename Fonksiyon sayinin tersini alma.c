#include <stdio.h>
#include <stdlib.h>
int basamakbul (int sayi){
    int basamak = 0;
    if(sayi>=0){
         do
        {
            basamak++;
        sayi = sayi/10;

    }while(sayi>0);

    }
    return basamak;
}

 int tersinecevir(int sayi){
 int basamaksayimiz=basamakbul(sayi);
 int dizi[basamaksayimiz];
 int basamaksayisi=0;

 do{
    basamaksayisi++;
    dizi[basamaksayisi-1] = sayi % 10;
    sayi = sayi / 10;
 }while(sayi>0);

 float sayinintersi=0;

 for(int i = 0;i<basamaksayimiz;i++){
    sayinintersi = sayinintersi + dizi[i] * pow(10,basamaksayimiz-1-i);

 }
 return sayinintersi;

 }
int main(void)
{
    int sayi;
    printf("Lutfen basamagini ogrenmek istediginiz sayiyi yaziniz..\n");
    scanf("%d",&sayi);

    printf("%d sayisi %d basamaklidir\n",sayi,basamakbul(sayi));
    printf("%d sayisinin %d tersidir",sayi,tersinecevir(sayi));
}
