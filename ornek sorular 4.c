#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    double sayi;
    double fonk=0;
    printf("Lutfen bir sayi giriniz..\n");
    scanf("%lf",&sayi);
    for(int k=1;k<=50;k++){
        for (float i = 1;i<=k;i++){
            fonk += (1/i)*pow(((sayi-1)/sayi),i);
        }
        printf("%d terimin degeri %lf\n",k,fonk);
        fonk=0;
    }
}
