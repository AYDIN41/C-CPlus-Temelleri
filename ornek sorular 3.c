#include <stdio.h>
int main(void)
{
    int sayi;
    int sayac=0;
    int carpan;
    printf("Lutfen asal olup olmadigini ogrenmek istediginiz bir sayiyi giriniz..\n");
    scanf("%d",&sayi);
    if(sayi == 2 || sayi == 3){
            sayac++;
        printf("Girdiginiz sayi %d asaldir",sayi);
    }
    if(sayi <= 1){
        printf("Girdiginiz sayi asal degildir %d",sayi);
    }else{
        for(carpan = 2;carpan<=sayi/2;carpan++){
            if(sayi % carpan == 0){
                sayac++;
                printf("Girdiginiz %d asal degildir..\n",sayi);
                break;
            }

        } if(sayac == 0){
                printf("Girdiginiz sayi %d asaldir",sayi);
            }
    }
}
