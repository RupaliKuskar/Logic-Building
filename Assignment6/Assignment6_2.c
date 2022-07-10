/*
Program which accept number from user and check whether it contains 0 in it or not

Input: 2395
Output: There is no zero

Input: 1018
Output : it Contains zero

Input: 9000
Output : it Contains zero

Input : 10687
Output : it Contains zero
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////
//
//Function Name: ChkZero
//Description  : Used to check is number contains zero or not
//Input        : Integer
//Output       : Boolean
//Date         : 27/04/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////// 
BOOL ChkZero(int iNo)
{
    
    while(iNo)
    {
        if(iNo % 10 == 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;

        }
        
        
    }
    
}

/////////////////////////////////////////////////////////////////////////////////
//Program to accept number from user and check whether it contains 0 in it or not
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    BOOL bRet  = FALSE;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : 9000
// Output : It Contains zero
//
//////////////////////////////////////////////////////////////////////////////