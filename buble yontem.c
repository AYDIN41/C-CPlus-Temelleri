#include <stdio.h>
void diziduzeltme(int dizi[],int boyut){
        for(int i = 0;i<boyut;i++){
            for(int j = 1;j<boyut-i;j++){
                    if(dizi[j-1]>dizi[j]){
                     int temp;
                     temp = dizi[j];
                     dizi[j] = dizi[j-1];
                     dizi[j-1] = temp;
                    }
            }

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
