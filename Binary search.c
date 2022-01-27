#include <stdio.h>
int binarysearch(int dizisayilar[],int enkucuksayi,int enbuyuksayi,int aranansayi){
 while(enkucuksayi<=enbuyuksayi){
    int medyansayi = enkucuksayi + (enbuyuksayi-enkucuksayi)/2;
    if(dizisayilar[medyansayi] == aranansayi){
        return medyansayi;
    }
    if(dizisayilar[medyansayi]<aranansayi){
        enkucuksayi = medyansayi+1;
    }else{
        enbuyuksayi = medyansayi-1;
    }
 }
 return -1;
}
int main(void)
{
    int dizi[] = {1,7,13,41,51,94,101};
    int boyut = sizeof(dizi)/sizeof(int);
    int aranansayii;
    printf("Lutfen kacinci sirada oldugunu gormek istediginiz sayiyi yaziniz..\n");
    scanf("%d",&aranansayii);
    int aramasonucu = binarysearch(dizi,0,boyut-1,aranansayii);
    if (aranansayii >= 0){
        printf("Aradiginiz sayinin sirasi %d. siradir..\n",aramasonucu);
    }else{
    printf("Bu sayi bulanamamaktadir..\n");
    }
}
