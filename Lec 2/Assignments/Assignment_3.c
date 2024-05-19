/****************************************************************
 FILE DESCRIPTION
-----------------------------------------------------------------
*        File     :  Assignment_3.c
*        Brief    :  A C program to determine the day of the week
*                    based on the user input of the day number.
*
*        Details  :  This program prompts the user to enter a number
*                    representing a day of the week (1 for Monday,
*                    2 for Tuesday, ..., 7 for Sunday). It then uses
*                    a switch statement to print the corresponding
*                    day of the week.
*
*****************************************************************
* INCLUDES
****************************************************************/
#include<stdio.h>
/****************************************************************
*    LOCAL MACROS CONSTANT/FUNCTIONS
****************************************************************/

/****************************************************************
*    LOCAL DATA
****************************************************************/


/****************************************************************
*    GLOBAL DATA
****************************************************************/

/****************************************************************
*    LOCAL FUNCTION PROTOTYPES
****************************************************************/


/****************************************************************
*    LOCAL FUNCTIONS
****************************************************************/

/*
      Brief    : Day of the week determination.
	  Details  : This function takes an integer input representing
	             a day of the week (1-7) and prints the corresponding
	             day of the week.
	  param[in]: Day is an unsigned char variable representing the
   	             day of the week (1-7).
	  param[out]: None.
*/


/****************************************************************
*   GLOBAL FUNCTIONS
****************************************************************/
/*
      Brief    : main function.
	  Details  : This is the entry point of the program.
	             It prompts the user to enter a number representing
	             a day of the week, then prints the corresponding
	             day of the week using a switch statement.
	  param[in]: None.
*/
int main(void)
{
    /*1. Init Variables*/
    unsigned char Day = 0;
	printf("Enter Day Number(1:7): ");
	scanf("%hhu", &Day);

	/*2. Determine the day of the week based on the input number*/
	switch(Day)
	{
	    case 1:
	        printf("Monday\n");
	        break;

        case 2:
	        printf("Tuesday\n");
	        break;

	    case 3:
	        printf("Wednesday\n");
	        break;

	    case 4:
	        printf("Thursday\n");
	        break;

	    case 5:
	        printf("Friday\n");
	        break;

	    case 6:
	        printf("Saturday\n");
	        break;

	    case 7:
	        printf("Sunday\n");
	        break;

	    default:
	        printf("Invalid Number\n");
	        break;
	}

    /*End of function*/
    return 0;
}
/****************************************************************
*  END OF  FILE: Assignment_3.c
****************************************************************/
