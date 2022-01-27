#include <stdio.h>
int main(void)
{
    int sayi;
    int max;

    for (int i = 0;i<5;i++){
        printf("Lutfen max ogrenmek istediginiz sayilar icin random sayi giriniz\n");
        scanf("%d",&sayi);
        if(i == 0){
            max = sayi;
        }
        if(sayi>max){
            max = sayi;
        }
    }
    printf("Girdiginiz en buyuk deger %d\n",max);
}
