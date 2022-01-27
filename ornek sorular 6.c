#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void carpimtablosu(int numara){
        for(int i = 1;i<=10;i++){
            printf("%d x %d = %d\n",numara,i,numara*i);
        }
}
int main(void)
{
    int sayi;
    printf("Lutfen carpim tablosunda gormek istediginiz sayiyi yaziniz..\n");
    scanf("%d",&sayi);
    carpimtablosu(sayi);
}
