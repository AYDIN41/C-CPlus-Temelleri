#include <stdio.h>
int diziuzunlugubulma (char *diziadresi){
        int diziuzunlugu=0;
        for (int i = 0;diziadresi[i] != '\0';i++){
            diziuzunlugu++;
        }
        return diziuzunlugu;
}
int main(void)
{
    char isim[50];
    printf("Lutfen uzunlugunu ogrenmek istediginiz bir isim yaziniz..\n");
    scanf("%s",&isim);
    printf("%d",diziuzunlugubulma(&isim));

}
