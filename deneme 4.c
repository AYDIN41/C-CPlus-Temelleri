#include <stdio.h>
#include <stdlib.h>


int main() {

float gradePass[20];
    float gradeFail[20];
    int grade, countFail, countPass, minFail, minPass, maxFail,
        maxPass, sumFail, sumPass;
    double avgFail, avgPass;
    minFail=60;
    maxFail=0;
    minPass=100;
    maxPass=0;
    sumFail=0;
    sumPass=0;
    countFail=0;
    countPass=0;
    avgFail=0;
    avgPass=0;

    for (int i=0;i<20;i++){
        printf("Please open your number : ");
        scanf("%d",&grade);
        if (grade<60 && grade > 0){
            countFail++;
            gradeFail[i] = grade;
            if(gradeFail[i]<minFail){
                minFail = gradeFail[i];
                if(gradeFail[i]<gradeFail[i]){
                    gradeFail[i]= minFail;
                }

            }
            if(gradeFail[i]>maxFail){
                maxFail = gradeFail[i];
                if(gradeFail[i]>gradeFail[i]){
                    gradeFail[i]= maxFail;
                }

            }
            sumFail = sumFail + gradeFail[i];
            avgFail = sumFail / countFail;

        }

    else if (grade>= 60 && grade<=100){
                countPass++;
            gradePass[i] = grade;
            if(gradePass[i]<minPass){
                minPass = gradePass[i];
                if(gradePass[i]<gradePass[i]){
                    gradePass[i]= minPass;
                }

            }
            if(gradePass[i]>maxPass){
                maxPass = gradePass[i];
                if(gradePass[i]>gradePass[i]){
                    gradePass[i]= maxPass;
                }

            }
            sumPass = sumPass + gradePass[i];
            avgPass = sumPass / countPass;
        }
        else if (grade < 0 || grade > 100){
            printf("Please open new value your value is not allowed..\n");
            scanf("%d",&grade);

        }
}


        printf("Count Fail is : %d\n",countFail);
        printf("MinFail is : %d\n",minFail);
        printf("MaxFail is : %d\n",maxFail);
        printf("Average is : %lf\n",avgFail);
        printf("Count Pass is : %d\n",countPass);
        printf("MinPass is : %d\n",minPass);
        printf("MaxPass is : %d\n",maxPass);
        printf("Average is : %lf\n",avgPass);
             return(0);



}
