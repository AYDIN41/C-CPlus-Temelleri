#include <stdio.h>
void yildizbas (int *adet){
    for(int i = 0;i<*adet;i++){
        printf("*\n");
    }
}
int main(void)
{
    int sayi;
    printf("Lutfen kac yildiz gormek istiyorsaniz yazin\n");
    scanf("%d",&sayi);

    yildizbas(&sayi);



   /* int sayi1=4,sayi2=7;
    int *sayi1adres,*sayi2adres;

    sayi1adres = &sayi1;
    sayi2adres = &sayi2;
    printf("%d\n",*sayi1adres);
    printf("%d",*sayi2adres);*/
}
