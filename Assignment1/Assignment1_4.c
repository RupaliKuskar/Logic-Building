//Program to Check is number is divisible by 5 or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////
//
//Function Name: Divide
//Description  : Used to Check is number is divisible by 5 or not
//Input        : Integer
//Output       : Integer
//Author       : Rupali Bramhadev Kuskar
//Date         : 19/04/2022
//
/////////////////////////////////////////////////////////////////

int Check(int iNo)
{
    int iAns = 0;

    if(iNo % 5 == 0)
    {
        return TRUE;
    } 
    else
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////////
//Program to Check is number is divisible by 5 or not 
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}

////////////////////////////////////////////////////////////////
//Input : 15
//Output: Divisible by 5
///////////////////////////////////////////////////////////////
