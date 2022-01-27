#include <stdio.h>
int main(void)
{
 /*  int satirsayisi1;
    int sutunsayisi1;
    int satirsayisi2;
    int sutunsayisi2;

    printf("Lutfen yazmak istediginiz satir dizi 1 icin sayisini yaziniz..\n");
    scanf("%d",&satirsayisi1);
    printf("Lutfen yazmak istediginiz sutun dizi 1 icin sayisini yaziniz..\n");
    scanf("%d",&sutunsayisi1);
    int dizi[satirsayisi1][sutunsayisi1];
    printf("Lutfen yazmak istediginiz satir dizi 2 icin sayisini yaziniz..\n");
    scanf("%d",&satirsayisi2);
    printf("Lutfen yazmak istediginiz sutun dizi 2 icin sayisini yaziniz..\n");
    scanf("%d",&sutunsayisi2);
    int dizi2[satirsayisi2][satirsayisi2];
    for (int i = 0;i<satirsayisi1;i++){
        for(int j = 0;j<sutunsayisi1;j++){
                printf("Dizi 1 degerlerini giriyorsunuz..\n");
            scanf("%d",&dizi[i][j]);

        }
} for (int i = 0;i<satirsayisi2;i++){
        for(int j = 0;j<sutunsayisi2;j++){

            printf("Dizi 2 degerlerini giriyorsunuz..\n");
            scanf("%d",&dizi2[i][j]);
        }
}



      for (int i = 0;i<satirsayisi1;i++){
        for(int j = 0;j<sutunsayisi1;j++){
            printf("%d \t ",dizi[i][j]);
            printf("%d \t ",dizi2[i][j]);
            printf("%d 'satir + %d sutun = %d ",i+1,j+1,dizi[i][j]+dizi2[i][j]);
            printf("\n");
    }
}
      for (int i = 0;i<satirsayisi2;i++){
        for(int j = 0;j<sutunsayisi2;j++){
            printf("%d \t ",dizi[i][j]);
            printf("%d \t ",dizi2[i][j]);
            printf("%d 'satir + %d sutun = %d ",i+1,j+1,dizi[i][j]+dizi2[i][j]);
            printf("\n");
    }
}
*/
 char ogrenci[2][5][20];
 for (int i = 0;i<1;i++){
    for (int j = 0;j<6;j++){
        printf("%d sinifdaki %d numarali ogrenciyi giriniz..\n",i+1,j+1);
        scanf("%s",ogrenci[i][j]);
    }
 }
 for (int i = 1;i<2;i++){
    for (int j = 0;j<4;j++){
        printf("%d sinifdaki %d numarali ogrenciyi giriniz..\n",i+1,j+1);
        scanf("%s",ogrenci[i][j]);
    }
 }
 for (int i = 0;i<1;i++){
    for (int j = 0;j<6;j++){
        printf("%d sinifdaki %d numarali ogrenci %s \n",i+1,j+1,ogrenci[i][j]);
    }
    for (int i = 1;i<2;i++){
    for (int j = 0;j<4;j++){
        printf("%d sinifdaki %d numarali ogrenci %s \n",i+1,j+1,ogrenci[i][j]);

    }
 }
 }
}
