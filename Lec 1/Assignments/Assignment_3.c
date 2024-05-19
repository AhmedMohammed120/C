/****************************************************************
 FILE DESCRIPTION
-----------------------------------------------------------------
*        File     :  Assignment 3
*        Brief    :  A C program to find the position of the lowest
*                    order set bit in a given integer.
*
*        Details  :  This program takes an integer input from the user
*                    and determines the position (0-indexed) of the
*                    lowest order set bit in the binary representation
*                    of the input number.
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
unsigned char Lowest_Order_Set_Bit(int Data);

/****************************************************************
*    LOCAL FUNCTIONS
****************************************************************/

/*
      Brief     : Check lowest order set bit.
	  Details   : This function iterates through each bit of the input
	              number to find the position of the lowest order set bit.
	  param[in] : Data is the integer for which the lowest order set
	              bit is to be found.
	  param[out]: The position of the lowest order set bit (0-indexed).
*/
unsigned char Lowest_Order_Set_Bit(int Data)
{
	/*1. Initialize Bit_Number to store the position of the lowest order set bit*/
	unsigned char Bit_Number = 0;

	/*2. Iterate through each bit of the input number*/
	for(unsigned char Counter = 0; (1 << Counter) <= Data; Counter++)
	{
		/*3. Check if the current bit is set in the input number*/
		if(((1 << Counter) & Data))
		{
			/*4. If the bit is set, exit the loop as the lowest order
			     set bit is found*/
			break;
		}
		else
		{
			/*5. If the bit is not set, increment Bit_Number to move to the next
			   bit*/
			Bit_Number++;
		}
	}
	/*6. Return the position of the lowest order set bit*/
	return Bit_Number;
}

/****************************************************************
*   GLOBAL FUNCTIONS
****************************************************************/
/*
      Brief    : main function.
	  Details  : This is the entry point of the program.
	             It prompts the user to enter an integer and then
	             calls the Lowest_Order_Set_Bit function to find the
	             position of the lowest order set bit in the input number.
	  param[in]: None.
*/
int main(void)
{
    /*1. Init Variables*/
	int Scanned_Number = 0;
	unsigned char Bit_Number = 0;

    /*2. Prompt the user to enter an integer*/
    printf("Enter any number: ");

	/*3. Read the input number from the user*/
	scanf("%d", &Scanned_Number);

	/*4. Call the Lowest_Order_Set_Bit function to find the position
	     of the lowest order set bit*/
	Bit_Number = Lowest_Order_Set_Bit(Scanned_Number);

	/*5. Print the position of the lowest order set bit*/
	printf("Lowest Order Set bit in %d is : %d\n", Scanned_Number, Bit_Number);

    /*End of function*/
    return 0;
}
/****************************************************************
*  END OF  FILE: Assignment_3.c
****************************************************************/
