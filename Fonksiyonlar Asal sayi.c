#include <stdio.h>
/*
int Asalsayilar (int sayi){
    if(sayi == 1){
        return 0;
    }
    for(int carpan = 2;carpan<=sayi/2;carpan++){
            if (sayi % carpan == 0){
                return 0;
            }

    }
    return 1;




}
*/

int main(void)
{
int sayac;
 int a;
    //int i = 1000;
            for(int sayi = 2;sayi<1002;sayi++){
                a = 0;

            for(int carpan = 2;carpan<=sayi-1;carpan++){

            if (sayi % carpan == 0){
                  a = 1;

            }

            }
            if (a==0){
                    sayac++;
                printf("%d\n",sayi);
            }
            }printf("1 ile 1000 arasinda %d kadar sayi var\n",sayac);




  /*  int sayac;
    for(int i = 1;i<=1000;i++){
        if(Asalsayilar(i) == 1){
                sayac++;
            printf("%d Asaldir \n",i);

        }
    }
    printf("1 %d tane 1000 arasinda asal sayi var",sayac);*/
}
