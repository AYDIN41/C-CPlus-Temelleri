#include <stdio.h>
#include<stdlib.h>
float toplama(double *sayi1, double *sayi2){
        return *sayi1+*sayi2;
}
float cikarma(double *b,double *s){
        return *b - *s;
}
float carpma (double *sayi1,double *sayi2){
        return *sayi1 * *sayi2;
}
float bolme(double *emirhan,double *aydin){
        return *emirhan / *aydin;
}
int main(void)
{
    double sayi1,sayi2;
    printf("Lutfen 2 sayi giriniz,\n");
    scanf("%lf",&sayi1);
    scanf("%lf",&sayi2);

    printf("%lf\n",toplama(&sayi1,&sayi2));
    printf("%lf\n",cikarma(&sayi1,&sayi2));
    printf("%lf\n",carpma(&sayi1,&sayi2));
    printf("%lf\n",bolme(&sayi1,&sayi2));


}

