int main()
{
    int sayi1,sayi2,kucuk,buyuk,kalan;
    char karakter;


    do{



    do{
            printf("Lutfen EBOB'unu bulmak istediginiz iki pozitif tam sayiyi giriniz.\n");
            scanf("%d%d", &sayi1,&sayi2);

    }while(sayi1<=0  sayi2<=0);



if (sayi1>sayi2) {
    buyuk=sayi1;
    kucuk=sayi2;
}
else {
    buyuk=sayi2;
    kucuk=sayi1;
}

    kalan = buyuk % kucuk;

while(kalan!=0){

        buyuk = kucuk;
        kucuk = kalan;
        kalan = buyuk % kucuk;
}

printf("EBOB(%d,%d) = %d",sayi1,sayi2,kucuk);

}

    printf("Lutfen devam etmek istiyorsaniz E ye basýnýz.\n");
    scanf(" %c", &karakter);
    }while(karakter== 'e'  karakter=='E');



 return 0;
 }
