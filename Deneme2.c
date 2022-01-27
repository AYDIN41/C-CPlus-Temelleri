#include <stdio.h>
int main(void)
{
    int male,female;
    char gender;
    char soru;
    male=0;
    female=0;

        printf("Cinsiyetmi sormak istiyorsunuz..\n");
        scanf(" %c",&soru);


   while(soru == 'e'){
       printf("Girmek istediginiz 2 cinsiyeti yaziniz..\n");
        scanf(" %c",&gender);

        if ( gender == 'm'){

            male = male + 1;

        }else if (gender == 'f'){

            female = female + 1;

        } else {
        printf("'f'ila 'm' giriniz..\n");
        }
            printf("devam etmek istiyormusunuz\n");
            scanf(" %c",&soru);

   }
        printf("Erkek numarasi %d",male);
        printf("Kadin numarasi %d",female);


    return 0;
}
