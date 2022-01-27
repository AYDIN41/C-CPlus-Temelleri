#include <stdio.h>
#include<string.h>
int main(void)
{
    char ilcebilgileri[20] = "41000 Izmit";
    char postakodu[20];

    strcpy(postakodu,ilcebilgileri);
    //strncpy(postakodu,ilcebilgileri,6);

    //printf("Ulkede sahip olunan %s",ulke);
    for(int i = 0;postakodu[i]!='\0';i++){
        printf("%c",postakodu[i]);
    }

}
