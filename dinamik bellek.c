#include <stdio.h>
int main(void)
{
 /*   char dizi [20][20];
    int secenek;
    printf("Lutfen kac isim yazmak istediginizi yaziniz..\n");
    scanf("%d",&secenek);
    for(int i = 0;i<secenek;i++){
        printf("Lutfen isimleri yaziniz\n");
        scanf("%s",&dizi[i]);
    }
    for(int i = 0;i<secenek;i++){
        printf("%d isim %s dir\n",i+1,dizi[i]);

    }*/
    int *alan1 = malloc (10*sizeof(int));
    int *alan2 = calloc (10,sizeof(int));

    for (int i = 0;i<10;i++){
        printf("alan1[%d] = %d           alan2[%d] = %d \n",i,alan1[i],i,alan2[i]);
    }
    alan1 = realloc(alan1,15*sizeof(int));
    for (int i = 0;i<15;i++){

        printf("alan1[%d] = %d \n",i,alan1[i]);
    }
    free(alan1);
    free(alan2);
}
