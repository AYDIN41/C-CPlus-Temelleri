#include <stdio.h>
#include <string.h>
int main(void)
{
    char kullanici [40] = "";
    char isim [20] = "Ad: ";
    char meslek [30] = "Meslek: ";
    char isimgir [20];
    char meslekgir [20];
    printf("Lutfen isim ve mesleklerinizi giriniz..\n");
    scanf("%s %s",&isimgir,&meslekgir);

    strcat(isim,isimgir);
    strcat(meslek,meslekgir);
    //printf("%s\n%s",isim,meslek);
    strcat(kullanici,isim);
    strcat(kullanici,"\n");
    strcat(kullanici,meslek);
    printf("%s",kullanici);
}
