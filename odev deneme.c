#include <stdio.h>
int main(void)

{

    	char took;
		int gradePass[20];
		int gradeFail[20];
		int i,grade,countFail=0,countPass=0,minFail,minPass,maxFail,maxPass,sumFail=0,sumPass=0;
		double avgFail=0, avgPass=0;
				printf("Which type grade enter?[P/F]: ");
				scanf(" %c",&took);

		if (took == 'P'|| 'p')	{

				printf("Enter 20 final passing grades(60-100): ");
			for(i=0;i<2;i++){
				scanf("%d",&gradePass[i]);
				countPass=countPass+1;
				sumPass+=gradePass[i];
					}
				avgPass=sumPass/countPass;
							maxPass=minPass=gradePass[0];
			for(i=0;i<20;i++){
				if(gradePass[i]<minPass){
					minPass=gradePass[i];
				}
				if(gradePass[i]>maxPass){
					maxPass=gradePass[i];
				}
					}
				printf("Maximum passing grade: %d\n",maxPass);
				printf("Minimum passing grade: %d\n",minPass);
				printf("Avarage of passing grades: %lf",avgPass);

	}
			if (took == 'F' || 'f'){

				printf("Enter 20 final failing grades(0-59): ");
			for(i=0;i<20;i++){
				scanf("%d",&gradeFail[i]);
				countFail=countFail+1;
				sumFail+=gradeFail[i];
					}
				avgFail=sumFail/countFail;
							maxFail=minFail=gradeFail[0];
			for(i=0;i<20;i++){
				if(gradeFail[i]<minFail){
					minFail=gradeFail[i];
				}
				if(gradeFail[i]>maxFail){
					maxFail=gradeFail[i];
				}}
                printf("Maximum failing grade: %d\n",maxFail);
				printf("Minimum failing grade: %d\n",minFail);
				printf("Avarage of failing grades: %lf",avgFail);


}

		return 0;







}




