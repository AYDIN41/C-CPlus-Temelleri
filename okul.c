#include <stdio.h>
#define PI 3.14
int main ()
{
    int loop;
	double 	num1, num2;	// (input) given numbers
	int choice;	// (input) choice of the user
    printf("How many times do you want to do this loop?: ");
    scanf("%d",&loop);

	// Get the numbers
	printf ("Enter two numbers: ");
	scanf ("%lf %lf", &num1, &num2);

// Display the menu and get a valid choice
    for(int i = 0;i<loop;i++){
        do
    {	do
	    {

            printf ("1) Add\n");
            printf ("2) Subtract\n");
            printf ("3) Multiply\n");
            printf ("4) Divide\n");
            printf ("5) Exit\n");
            printf ("\nEnter your choice: ");
            scanf ("%d", &choice);
            if (choice < 1 || choice > 5){
                printf("Please open new number correctly\n");
	        }
	    } while (choice < 1 || choice > 5);

        // Show the result of the chosen operation
        switch (choice)
        {	case 1: printf ("Result = %f\n", num1 + num2); break;
            case 2: printf ("Result = %f\n", num1 - num2); break;
            case 3: printf ("Result = %f\n", num1 * num2); break;
            case 4: while (num2 == 0)
                    {	printf ("Division by 0 is not allowed!\n");
                        printf ("Enter a non-zero value for the second number: ");
                        scanf ("%lf", &num2);
                    }
                    printf ("Result = %f\n", num1 / num2);
        }
    } while (choice != 5);
    }

    return (0);
}






/*{



    	double grade1, grade2,	// (input) two grades
	average;	// average of two grades
	char took; 	/* (input) Did the student take
			the exam before? (Y/N) */
	/*int std,	// index for students
		num_std;	// (input) number of students

	// Get the number of students
	printf ("How many students took the exam? ");
	scanf ("%d", &num_std);

	// Repeat for each student
	for (std = 1; std <= num_std; std = std + 1)
	{
	// Get the grades
	printf ("Enter two grades of student %d: ", std);
	scanf ("%lf %lf", &grade1, &grade2);
    while(grade1>100 || grade2>100 || 0>grade1 || 0>grade2 ){
        printf("Do not write greater or smaller number than 100 / 0 \n");
        scanf ("%lf %lf", &grade1, &grade2);
    }


	// Calculate their average
	average = (grade1 + grade2) / 2.0;

	// Check if the student is unsuccessful or successful
	if (average < 50)
	{		// Ask if the student take the exam before
		printf ("Did the student take the exam before? (Y/N) ");
		scanf (" %c", &took); // blank or \n before %c
		if (took == 'Y')
				printf("\nUnsuccessful, and has no other chance\n");
		else if (took == 'N')
				printf("\nUnsuccessful, but has one more chance\n");
		else{
            printf("Please write Y or N..\n");
            printf("Please write again..\n");
            scanf(" %c",&took);
            while(took!='Y' && took!= 'N'){
                printf("Please write Y or N..\n");
                scanf(" %c",&took);

            } if (took == 'Y')
				printf("\nUnsuccessful, and has no other chance\n");
		else if (took == 'N')
				printf("\nUnsuccessful, but has one more chance\n");
		}


	}
	else
		printf("\nSuccessful\n");

	} // for loop

	return(0);
}


	double 	num1, num2;	// (input) given numbers
	int choice;	// (input) choice of the user

	// Get the numbers
	printf ("Enter two numbers: ");
	scanf ("%lf %lf", &num1,&num2);

// Display the menu and get a valid choice
    do
    {	do
	    {	printf ("1) Add\n");
            printf ("2) Subtract\n");
            printf ("3) Multiply\n");
            printf ("4) Divide\n");
            printf ("5) Exit\n");
            printf ("\nEnter your choice: ");
            scanf ("%d", &choice);
	    } while (choice < 1 || choice > 5);

        // Show the result of the chosen operation
        switch (choice)
        {	case 1: printf ("Result = %f\n", num1 + num2); break;
            case 2: printf ("Result = %f\n", num1 - num2); break;
            case 3: printf ("Result = %f\n", num1 * num2); break;
            case 4: while (num2 == 0)
                    {	printf ("Division by 0 is not allowed!\n");
                        printf ("Enter a non-zero value for the second number: ");
                        scanf ("%lf", &num2);
                    }
                    printf ("Result = %f\n", num1 / num2);
        }
    } while (choice != 5);
    return (0);

}


    local variable definition

   char grade;
   printf("Please open one chrachter\n");
   scanf(" %c",&grade);


   switch(grade) {
      case 'A' :
         printf("Excellent!\n" );
         break;
      case 'B' :
      case 'C' :
         printf("Well done\n" );
         break;
      case 'D' :
         printf("You passed\n" );
         break;
      case 'F' :
         printf("Better try again\n" );
         break;
      default :
         printf("InvDalid grade\n" );

   }

   printf("Your grade is  %c\n", grade );



   return 0;
}

 /*   char c ;
    printf("Please open the one character..\n");
    scanf(" %c",&c);
    switch (c)
    {
        case 'A' ... 'K':
            printf("%c in range A to K\n", c);
            break;
        case 'L' ... 'Z':
            printf("%c in range L to Z\n", c);
            break;
        default:
            printf("%c not in range\n", c);
            break;
    }

  printf ("Enter the letter grade: ");
   scanf (" %c",&grade);

     int m;
     printf("Please open the one number\n");
     scanf("%d",&m);
     switch (m)
     {
         case 1 ... 5:
             printf("%d in range 1 to 5\n", m);
             break;
         case 6 ... 10:
             printf("%d in range 6 to 10\n", m);
             break;
         case 11 ... 20:
            printf("%d in range 11 to 20\n",m);
            break;
         default:
             printf("%d not in range\n", m);
             break;
     }
*/



