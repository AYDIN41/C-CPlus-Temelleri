#include <stdio.h>
void diziduzeltme(int dizi[],int boyut){
       int eleman,oncesi;
       for (int i = 0;i<boyut;i++){
        eleman = dizi[i];
        oncesi = i - 1;

        while(oncesi >= 0 && dizi[oncesi]>eleman){
            dizi[oncesi + 1] = dizi[oncesi];
            oncesi--;
        }
        dizi[oncesi+1]=eleman;
       }

}
int main(void)
{
    int tamsayidizisi[50];
    int boyut;
    printf("Lutfen kac tane sayi girmek istiyorsaniz yaziniz..\n");
    scanf("%d",&boyut);
    for(int i = 0;i<boyut;i++){
        printf("%d.sayiyi giriniz..\n",i+1);
        scanf("%d",&tamsayidizisi[i]);
    }
    for(int i = 0;i<boyut;i++){
        printf("%d ",tamsayidizisi[i]);
    }
    printf("\n");
    diziduzeltme(tamsayidizisi,boyut);
    for(int i = 0;i<boyut;i++){
            printf("%d ",tamsayidizisi[i]);
}
}
