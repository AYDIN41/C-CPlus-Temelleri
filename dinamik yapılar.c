#include <stdio.h>
int main(void)
{

    char** cokboyutludizi;
    cokboyutludizi = malloc(sizeof(char*)*3);

    for (int i = 0;i<3;i++){
        cokboyutludizi[i] = malloc(10*sizeof(char));
    }
    for(int i = 0;i<3;i++){
        printf("Lutfen yazmak istediginiz isimleri yaziniz\n");
        scanf("%s",cokboyutludizi[i]);
    }
    for(int i = 0;i<3;i++){
        printf("%s\n",cokboyutludizi[i]);

    }


    /*int *sayidizileri = calloc(10,sizeof(int));
    int toplam = 0;
    printf("Lutfen toplamanini bulmak istediginiz sayilari yaziniz..\n");
    for(int i = 0;i<10;i++){

        scanf("%d",&sayidizileri[i]);
        toplam = toplam + sayidizileri[i];
    }
    for(int i = 0;i<1;i++){
        printf("%d\n",toplam);

    }*/
}
