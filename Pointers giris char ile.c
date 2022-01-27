#include <stdio.h>
int main(void)
{
    /*char *sayilar[] = {"Besiktas","Fener","Ea","Sa","fs"};
    for(int i = 0;*sayilar[i]!= '\0';i++){
        printf("%s\n",*(sayilar+i));
    }*/
    char ulkeler [5][20];
    char *ulkelerinadresi [5];

    for(int i = 0;i<5;i++){
        printf("%d. Ulkeyi seciniz: ",i+1);
        scanf("%s",&ulkeler[i]);
        printf("\n");
    }
   /* for(int i = 0;i<5;i++){
        printf("%d. Ulke:%s\n",i+1,ulkeler[i]);

    }*/
    for(int i = 0;i<5;i++){
        ulkelerinadresi[i] = &ulkeler[i];

    }
    for(int i = 0;i<5;i++){
        printf("%d. Ulke:%s\n",i+1,*(ulkelerinadresi+i));

    }

}
