#include <stdio.h>
int main(void)
{
    char kelime [30];
    char *duzadres;
    char *tersadres;
    printf("Lutfen palindrom oldugunu ogrenmek istediginiz kelimeyi yaziniz..\n");
    gets(kelime);
    for(tersadres=kelime; *tersadres != NULL;tersadres++);
        for(duzadres=kelime,tersadres--;tersadres>=duzadres;){
            if(*tersadres == *duzadres){
                tersadres--;
                duzadres++;
            }else{
                break;
            }
        }
        if (duzadres>tersadres){
            puts(kelime);
                printf("Palindromdur");
        }else{
        puts(kelime);
        printf("Palindrom degildir");
        }
}
