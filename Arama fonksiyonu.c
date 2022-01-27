#include <stdio.h>
int aramafonk(int dizi[],int aranandeger,int boyut){
        for(int i = 0;i<boyut;i++){
            if(dizi[i] == aranandeger){
                return i;
            }
        }
        return -1;
}
int main(void)
{
    int sayidizisi[20];
    int aranansayi;
    int boyut1;
    char istenen;
    printf("Lutfen kac sayi icerisinden kendi sayinizi bulmak istiyorsunuz?\n");
    scanf("%d",&boyut1);
    for(int i = 0;i<boyut1;i++){
        printf("Istediginiz sayiyi girmek istiyorsaniz [Y]'e tiklayin\n");
        scanf(" %c",&istenen);
        if(istenen == 'Y'){
                printf("Lutfen istediginiz sayiyi giriniz..\n");
            scanf("%d",&sayidizisi[i]);
            sayidizisi[i] = aranansayi;
        }else{
            printf("Lutfen random sayi giriniz..\n");
        scanf("%d",&sayidizisi[i]);

        }


    }
    int bizimsayi = aramafonk(sayidizisi,aranansayi,boyut1);
    if (bizimsayi>= 0){
    printf("sayiniz %d.sirada",bizimsayi+1);
    }else {
    printf("Aradaginiz deger bulunamadi..\n");
    }

}
