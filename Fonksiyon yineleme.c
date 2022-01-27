#include <stdio.h>
int faktoriyel(int sayi){
    int sonuc=1;
    for(int i = 1; i<=sayi;i++){
        sonuc = sonuc * i;
    }
    return sonuc;
}
int faktoriyelrek(int sayi){
    if(sayi<=1){
        return 1;
    }else{
        return sayi * faktoriyelrek(sayi-1);
    }

}
int main(void)
{
    int sayi;
    printf("faktoryelinin ogrenmek istediginiz sayiyi yaziniz: ");
    scanf("%d",&sayi);
    printf("%d sayisinin faktoriyeli %d",sayi,faktoriyelrek(sayi));
}
