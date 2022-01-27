#include <stdio.h>
int main(void)
{
    int ruzgar;
    printf("Lurfen ruzgar gucunu griniz\n");
    scanf("%d",&ruzgar);

    switch (ruzgar){
        case 1 ... 25 : printf("az ruzgar\n"); break;
        case 26 ... 40 : printf("ruzgarli\n"); break;
        case 41 ... 60 : printf("cok ruzgarli\n"); break;
        case 61 ... 72 : printf("kasirga\n"); break;
        default : printf("cok kasirgali\n");
    }
    printf("sizin ruzgar gucunuz: %d",ruzgar);
}
