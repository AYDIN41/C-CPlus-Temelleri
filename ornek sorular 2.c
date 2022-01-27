#include <stdio.h>
int main(void)
{
    int sayi;
    int ciftartis = 0,tekartis = 0;
    printf("Lutfen 10 tane sayi giriniz.\n");
    for (int i = 0;i<10;i++){
        printf("Lutfen %d.sayiyi giriniz..\n",i+1);
        scanf("%d",&sayi);
        if(sayi % 2 == 0){
            ciftartis++;
        }else if (sayi % 2 != 0){
            tekartis++;
        }
    }
    printf("Girdiginiz tek sayi miktari %d\n",tekartis);
    printf("Girdiginiz cift sayi miktari %d\n",ciftartis);
}
