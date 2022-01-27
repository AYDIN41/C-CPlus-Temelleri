#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dice(void){
    int dice1,dice2,dice3;
    srand(time(0));
    dice1=(rand()%6)+1;
    dice2=(rand()%6)+1;
    dice3=(rand()%6)+1;

    printf("Dice1:%d\nDice2:%d\nDice3:%d\n\n",dice1,dice2,dice3);

    if(dice1==dice2 && dice1==dice3 && dice2==dice3){
        printf("All dices are equal\n\a");
    }else if(dice1==dice2 && dice1!=dice3 && dice2!=dice3){
        printf("Dice 1 and Dice 2 equal\nDice 3 is different\n\a");
    }else if(dice1==dice3 && dice2!=dice3 && dice1!=dice2){
        printf("Dice 1 and Dice 3 equal\nDice 2 is different \n\a");
    }else if(dice3==dice2 && dice1!=dice3 && dice1!=dice2){
        printf("Dice 2 and Dice 3 equal\nDice 1 is different\n\a");
    }else{
        printf("All dices are different\n");
    }


}

int main(){

    int ask;
    dice();

    printf("If you want to make press 1 number\n");
    scanf(" %d",&ask);
    while (ask == 1){
        dice();
        printf("If you want to make press 1 number\n");
        scanf("%d",&ask);
         if (ask != 1){
        printf("Your turn is over\n");
    }
    }


    system("pause");
    return 0;
}
