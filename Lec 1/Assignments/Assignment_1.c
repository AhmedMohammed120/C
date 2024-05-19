/****************************************************************
 FILE DESCRIPTION
-----------------------------------------------------------------
*        File     :  Assignment1.c
*        Brief    :  A C Program to inbut any number of the user &
*                    check if LSB is set or not for the given number
*        Details  :  -
*

*****************************************************************
* INCLUDES
****************************************************************/
#include<stdio.h>
/****************************************************************
*    LOCAL MACROS CONSTATN\FUNCTIONS
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
static char LSB_Check(int Data);





/****************************************************************
*    LOCAL FUNCTIONS
****************************************************************/

/*
      Brief    : Least significant bit check.
	  Details  : LSB_Check is a function to check if LSB of a given
	             number is set or not.
      Hint     : This function handle int variables with the range of int numbers
	  param[in]: Data is variable of type int contains
   	             data which need to be checked.
	  param[out]: LSB Value.
*/
static char LSB_Check(int Data)
{
	/*1. Init Variables*/
	char Result = 0;
	
	/*2. Check Value of LSB & Assign its value to Result*/
	if(Data & 0x1)
	{
	
		Result = 1;
	}
	else
	{
		Result = 0;
	}
	/*3. Return Result*/
	return Result;
}


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
    int Scanned_Num = 0;
	char Operation_Result = 0;
	
    /*2. Print message to the user to scan a number*/
	printf("Enter Number ");
	
	/*3. Assign the scanned number into its variable */
	scanf("%d",&Scanned_Num);
	
	/*4. Starting Check Operation*/
	Operation_Result = LSB_Check(Scanned_Num);
   
    /*5. Check result of the check operation then print results*/
	if(Operation_Result)
	
	   printf("LSB of %d is set",Scanned_Num);
	else
	   printf("LSB of %d is unset",Scanned_Num);
    /*End of function*/
    return 0;
}
/****************************************************************
*  END OF  FILE: Assignment1.c
****************************************************************/
