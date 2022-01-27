#include <stdio.h>

float celcuis (float fahrenheit){
            return (fahrenheit-32)/1.8;
}
float fahrenheit(float celcuis){
        return celcuis*1.8 + 32;
}
int main(void)
{

    for (int i = 32;i<213;i++){
        printf("%d Fahrenheit esittir %f celcuis 'e\n",i,celcuis(i));
    }
    for (int i = 0;i<101;i++){
        printf("%d Celcuis esittir %f Fahrenheit 'a\n",i,fahrenheit(i));
    }


    /*float celcuisdonusturme;
 printf("Lutfen fahrenheit e cevirmek istediginiz sayiyi yaziniz..\n");
    scanf("%f",&celcuisdonusturme);
    printf("%f celcuis %f fahrenheit a esittir\n",celcuisdonusturme,fahrenheit(celcuisdonusturme));
    printf("Lutfen celcuis e cevirmek istediginiz sayiyi yaziniz..\n");
    scanf("%f",&celcuisdonusturme);
    printf("%f fahrenheit %f celcuis a esittir",celcuisdonusturme,celcuis(celcuisdonusturme));
 */

}
