#include <stdio.h>
int sayilarinyerinidegistir(int *sayi1,int *sayi2){
    int aydin41;
    aydin41 = *sayi1;
    *sayi1 = *sayi2;
    *sayi2 = aydin41;
}
int main(void)
{
    int sayi1,sayi2;
    printf("Lutfen 2 sayi girin..\n");
    scanf("%d %d",&sayi1,&sayi2);
    printf("1. sayi: %d 2.sayi: %d\n",sayi1,sayi2);
    sayilarinyerinidegistir(&sayi1,&sayi2);
    printf("1. sayi: %d 2.sayi: %d",sayi1,sayi2);

}
