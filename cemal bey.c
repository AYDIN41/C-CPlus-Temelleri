#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dice(dice4,dice5,dice6){

    srand(time(0));
    dice4=(rand()%6)+1;
    dice5=(rand()%6)+1;
    dice6=(rand()%6)+1;

    printf("Dice1:%d\nDice2:%d\nDice3:%d\n\n",dice4,dice5,dice6);

}

int main(){

    int dice1,dice2,dice3,ask;
    menu:
    dice(dice1,dice2,dice3);

    if(dice1==dice2 && dice2==dice3 && dice1==dice3){
        printf("All of number are same");
    }
    ask:
    printf("\n\n");
    printf("Do you want retry this operation?\nYes:1\nNo:0\n");
    scanf("%d",&ask);

    system("CLS");

    if(ask==1){
        goto menu;
    }else if(ask==0){
        printf("See you\n");
        goto end;
    }else{
        printf("False operation\n");
        goto ask;
    }

    end:
    system("pause");
    return 0;
}
