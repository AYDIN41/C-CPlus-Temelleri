#include <stdio.h>
#include <stdlib.h>


int main() {

	// NO ARRAYS.I ADDED 2 VARIABLE. IF YOU ENTER 20 PASS GRADES OR 20 FAIL GRADES, THIS PROGRAM DOES NOT WORK!

	int grade,countFail=0,countPass=0,minFail=0,minPass=0,maxFail=0,maxPass=0,sumFail=0,sumPass=0,i,j=0,k=0;
	double avgFail, avgPass;

		printf("Enter 20 final exam grades[0-100]:");
		for(i=0;i<20;i++){
			scanf("%d",&grade);
								if(grade>=60)
		{

		countPass=countPass+1;
		sumPass=sumPass+grade;
	if(j==0){
		maxPass=grade;
		minPass=grade;	}
	else{

		if(grade>=maxPass)
		{	maxPass=grade;
			}
		if(grade<=minPass)
		{	minPass=grade;
			}

		}j=j+1;
		}
								if(grade<60){
		countFail=countFail+1;
		sumFail=sumFail+grade;

	if(k==0){
		maxFail=grade;
		minFail=grade;	}
	else{
		if(grade>=maxFail)
		{	maxFail=grade;
			}
		if(grade<=minFail)
		{	minFail=grade;

		}}
		k=k+1;
		}

		}
		if(countPass == 0){
            countPass = 1;
		}
		if (countFail == 0){
            countFail = 1;
		}
		avgPass=sumPass/countPass;
		avgFail=sumFail/countFail;

		printf("Minimum Failing grade: %d",minFail);
		printf("\nMaximum Failing grade: %d",maxFail);
		printf("\nAvarage of failing grades: %.2lf",avgFail);
		printf("\n");
		printf("\nMinimum passing grade: %d",minPass);
		printf("\nMaximum Failing grades: %d",maxPass);
		printf("\nAvarage of failing grades: %.2lf",avgPass);





	return 0;
}
