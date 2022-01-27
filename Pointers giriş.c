#include <stdio.h>
int main(void)
{
 /*   int sayi;
    printf("Lutfen bir sayi degeri giriniz..\n");
    scanf("%d",&sayi);

    int *sayiadresi;
    sayiadresi = &sayi;
    printf("%d\t%x\n",*sayiadresi,sayiadresi);
    printf("%d\t%x",sayi,&sayi);*/

    int sayi = 12,*sayininadresi;
    float kesirlisayi= 2.3,*kesirlisayininadresi;
    double buyukkesirsayi = 7.1,*buyukkesirsayininadresi;
    char karakter = 'E',*karakterinadresi;

    sayininadresi = &sayi;
    kesirlisayininadresi = &kesirlisayi;
    buyukkesirsayininadresi = &buyukkesirsayi;
    karakterinadresi = &karakter;

    printf("%d  %x\n",sayi,sayininadresi);
    printf("%f  %x\n",kesirlisayi,*kesirlisayininadresi);
    printf("%lf %x\n",buyukkesirsayi,*buyukkesirsayininadresi);
    printf("%c  %x\n",karakter,*karakterinadresi);

    int sayilar[6] = {1,2,3,4,5,6};
    printf("%x",&sayilar[2]);
}
