/****************************************************************
 FILE DESCRIPTION
-----------------------------------------------------------------
*        File     :  Assignment_2
*        Brief    :  A C Program used to describe numbers divided by 3
*
*        Details  :  This program prompts the user to enter five
*                    integer elements. It then checks each element
*                    to see if it is divisible by 3. If an element
*                    is divisible by 3, it prints that element.
*                    Otherwise, it moves on to the next element.
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




/****************************************************************
*   GLOBAL FUNCTIONS
****************************************************************/
/*
      Brief    : main function.
	  Details  : This is the entry point of the program.
	             It prompts the user to enter five integer elements,
	             checks each element to see if it is divisible by 3,
	             and prints the elements that are divisible by 3.
	  param[in]: None.
*/
int main(void)
{
    /*1. Init Variables*/
    int A = 0, B = 0, C = 0, D = 0, E = 0;
    int Flag = 0;

	/*2. Prompt the user to enter five integer elements*/
	printf("Enter Element Num 1: ");
	scanf("%d", &A);

	printf("Enter Element Num 2: ");
	scanf("%d", &B);

	printf("Enter Element Num 3: ");
	scanf("%d", &C);

	printf("Enter Element Num 4: ");
	scanf("%d", &D);

	printf("Enter Element Num 5: ");
	scanf("%d", &E);

	/*3. Check each element to see if it is divisible by 3 and print the ones that are*/
	if (!(A % 3))
	{
		/* Element A is divisible by 3 */
		printf("%d is divisible by 3\n", A);
		Flag = 1;
	}

	if (!(B % 3))
	{
		/* Element B is divisible by 3 */
		printf("%d is divisible by 3\n", B);
		Flag = 1;
	}

	if (!(C % 3))
	{
		/* Element C is divisible by 3 */
		printf("%d is divisible by 3\n", C);
		Flag = 1;
	}

	if (!(D % 3))
	{
		/* Element D is divisible by 3 */
		printf("%d is divisible by 3\n", D);
		Flag = 1;
	}

	if (!(E % 3))
	{
		/* Element E is divisible by 3 */
		printf("%d is divisible by 3\n", E);
		Flag = 1;
	}

	if(0==Flag)
    {
        printf("There is no number divided by 3\n");
    }
    /*End of function*/
    return 0;
}
/****************************************************************
*  END OF  FILE: Assignment_2
****************************************************************/
