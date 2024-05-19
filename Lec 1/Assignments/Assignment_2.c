/****************************************************************
 FILE DESCRIPTION
-----------------------------------------------------------------
*        File     :  Assignment 2
*        Brief    :  A C Code to input any number from the user
*                    then set its x bit
*        Details  :  -
*

*****************************************************************
* INCLUDES
****************************************************************/
#include<stdio.h>
/****************************************************************
*    LOCAL MACROS CONSTANT\FUNCTIONS
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
	  Details  : -
	  param[in]: None.
*/
int main(void)
{
    /*1. Init Variables*/
    int Scanned_Number = 0, New_Number = 0;
	unsigned int Bit_Number = 0;

	/*2. Prompt user to enter the number*/
	printf("Enter Number (Decimal Value): ");
	scanf("%d", &Scanned_Number);

	/*3. Prompt user to enter the bit number to be set*/
	printf("Enter Number of bit to be set from 0 to 31 (Decimal Value): ");
	scanf("%i", &Bit_Number);

	/*4. Calculate the new number with the specified bit set*/
	New_Number = (Scanned_Number | (1 << Bit_Number));

	/*5. Check if the bit number is within the valid range*/
	if (Bit_Number <= 31)
	{
		/*6. Check if the bit is already set in the original number*/
		if (New_Number == Scanned_Number)
		{
			printf("Bit is Already set\n");
		}
		else
		{
			/*7. Print the result of the operation*/
			printf("Success Operation\nNumber before setting bit %i : %i\nNumber after setting bit %i  : %i\n", Bit_Number, Scanned_Number, Bit_Number, New_Number);
		}
	}
	else
	{
		/*8. Notify the user that the entered bit number is out of range*/
		printf("Out of range\n");
	}

    /*9. End of function*/
    return 0;
}
/****************************************************************
*  END OF  FILE: Assignment 2
****************************************************************/
