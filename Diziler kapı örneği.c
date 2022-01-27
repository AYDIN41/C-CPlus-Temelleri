#include <stdio.h>
int main(void)
{
    /*int sayilar[] = {0,2,3,4};
    for (int i = 0;i<4;i++){
        sayilar[i] = !sayilar[i];
        printf("%d ",sayilar[i]);

    }*/
     int tur,kapi;
     int acik[10] = {0};

     for (tur = 0;tur<10;tur++){
        for(kapi = tur;kapi<10;kapi= kapi + tur + 1){
            acik[kapi] =! acik[kapi];

        }


     } printf("Acik kapi bunlardir..\n");
     for (kapi=0;kapi<10;kapi++){
        if(acik[kapi]){
            printf("%d ",kapi +1 );
        }
     }

}
