#include<stdio.h>
#include<stdlib.h>

int karaktera(int oyuncua){

	if(oyuncua==1){
	return 1;
	}
	else if(oyuncua==2){
	return 2;
	}
	else if(oyuncua==3){
	return 3;
	}else{
		return 0;
	}
}
int karakterb(int oyuncub){
	if(oyuncub==1){
	return 1;
	}
	else if(oyuncub==2){
	return 2;
	}
	else if(oyuncub==3){
	return 3;
	}else{
		return 0;
	}
}

int main(){

	int oyuncu1,oyuncu2,durum;
    int biryumruk=10,birtekme=12,birulti=18;
    int ikiyumruk=12,ikitekme=14,ikiulti=22;
    int ucyumruk=14,uctekme=16,uculti=26;
    int oyuncu1vurma=0;
    int oyuncu2vurma=0;
    int ozelliksecme;
    int rakipcan1=100;
    int rakipcan2=100;

	printf("Oyuncu1 ve oyuncu2 icin karakterleri seciniz:\n");
	printf("Spiderman:1\nBatman:2\nIronman:3\n");
	scanf("%d%d",&oyuncu1,&oyuncu2);

	system("CLS");

	printf("Oyuncu1:%d ve oyuncu2:%d\n",karaktera(oyuncu1),karakterb(oyuncu2));
	menu:
	    if(rakipcan1 != 0 || rakipcan2 != 0){
            oyuncu1vurma=0;
            oyuncu2vurma=0;
            while(oyuncu1vurma<3 && rakipcan1>0){
        printf("Bir yetenek kullanin:\n");
        if(oyuncu1==1){
            printf("1)yumruk=10 2)tekme=12 3)ulti=18\n");
            scanf("%d",&ozelliksecme);
            if (ozelliksecme==1){
                printf("%d\n",rakipcan1-biryumruk);
                rakipcan1=rakipcan1-10;
            }if (ozelliksecme==2){
                printf("%d\n",rakipcan1-birtekme);
                rakipcan1=rakipcan1-12;
            }if (ozelliksecme==3){
                printf("%d\n",rakipcan1-birulti);
                rakipcan1=rakipcan1-18;
        }
    }
     if(oyuncu1==2){
            printf("1)yumruk=12,2)tekme=14,3)ulti=22\n");
            scanf("%d",&ozelliksecme);
            if (ozelliksecme==1){
                printf("%d\n",rakipcan1-ikiyumruk);
                rakipcan1=rakipcan1-12;
            }if (ozelliksecme==2){
                printf("%d\n",rakipcan1-ikitekme);
                rakipcan1=rakipcan1-14;
            }if (ozelliksecme==3){
                printf("%d\n",rakipcan1-ikiulti);
                rakipcan1=rakipcan1-22;
        }
    }
    if(oyuncu1==3){
            printf("1)yumruk=14,2)tekme=16,3)ulti=26\n");
            scanf("%d",&ozelliksecme);
            if (ozelliksecme==1){
                printf("%d\n",rakipcan1-ucyumruk);
                rakipcan1=rakipcan1-14;
            }if (ozelliksecme==2){
                printf("%d\n",rakipcan1-uctekme);
                rakipcan1=rakipcan1-16;
            }if (ozelliksecme==3){
                printf("%d\n",rakipcan1-uculti);
                rakipcan1=rakipcan1-26;
        }
    } oyuncu1vurma++;
    }
    while(oyuncu2vurma<3 && rakipcan2>0){
        printf("Bir yetenek kullanin:\n");
        if(oyuncu2==1){
            printf("1)yumruk=10 2)tekme=12 3)ulti=18\n");
            scanf("%d",&ozelliksecme);
            if (ozelliksecme==1){
                printf("%d\n",rakipcan2-biryumruk);
                rakipcan2=rakipcan2-10;
            }if (ozelliksecme==2){
                printf("%d\n",rakipcan2-birtekme);
                rakipcan2=rakipcan2-12;
            }if (ozelliksecme==3){
                printf("%d\n",rakipcan2-birulti);
                rakipcan2=rakipcan2-18;
        }
    }
     if(oyuncu2==2){
            printf("1)yumruk=12,2)tekme=14,3)ulti=22\n");
            scanf("%d",&ozelliksecme);
            if (ozelliksecme==1){
                printf("%d\n",rakipcan2-ikiyumruk);
                rakipcan2=rakipcan2-12;
            }if (ozelliksecme==2){
                printf("%d\n",rakipcan2-ikitekme);
                rakipcan2=rakipcan2-14;
            }if (ozelliksecme==3){
                printf("%d\n",rakipcan2-ikiulti);
                rakipcan2=rakipcan2-22;
        }
    }
    if(oyuncu2==3){
            printf("1)yumruk=14,2)tekme=16,3)ulti=26\n");
            scanf("%d",&ozelliksecme);
            if (ozelliksecme==1){
                printf("%d\n",rakipcan2-ucyumruk);
                rakipcan2=rakipcan2-14;
            }if (ozelliksecme==2){
                printf("%d\n",rakipcan2-uctekme);
                rakipcan2=rakipcan2-16;
            }if (ozelliksecme==3){
                printf("%d\n",rakipcan2-uculti);
                rakipcan2=rakipcan2-26;
        }
    } oyuncu2vurma++;
    }
	    }

    printf("Oyuncu 1 Saglik: %d Oyuncu 2 Saglik: %d\n",rakipcan1,rakipcan2);

    if(rakipcan1<=0)
	printf("Oyunu 2 kazandý\n");
    else if(rakipcan2<=0)
    printf("Oyunu 1 kazandý\n");

    printf("devam etmek icin 1e cikmak icin herhangi bir tusa basin\n");
    scanf("%d",&durum);

    if(durum==1)
    goto menu;

	system("pause");
	return 0;
}
