/****************************************************************
 FILE DESCRIPTION
-----------------------------------------------------------------
*        File     :  Assignment1.c
*        Brief    :  A C program to calculate profit or loss based
*                    on the selling price and cost price entered by
*                    the user.
*
*        Details  :  This program prompts the user to enter the cost
*                    price and selling price, calculates the profit
*                    or loss based on the input values, and prints
*                    the result.
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
	             It prompts the user to enter the cost price and
	             selling price, calculates the profit or loss, and
	             prints the result.
	  param[in]: None.
*/
int main(void)
{
    /*1. Init Variables*/
    unsigned int Profit = 0, Loss = 0, Selling_Price = 0, Cost_Price = 0;

    /*2. User Input*/
    printf("Enter cost price: ");
    scanf("%u", &Cost_Price); 

    printf("Enter selling price: ");
    scanf("%u", &Selling_Price); 

    /*3. Profit/Loss Calculation*/
    if (Selling_Price >= Cost_Price)
    {
        Profit = Selling_Price - Cost_Price;
        printf("Profit = %u\n", Profit); 
    }
    else
    {
        Loss = Cost_Price - Selling_Price;
        printf("Loss = %u\n", Loss); 
    }

    /*End of function*/
    return 0;
}
/****************************************************************
*  END OF  FILE: Assignment1.c
****************************************************************/
