//Program to accept number from user and check whether number is even or not

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

////////////////////////////////////////////////////////////////////////////
//
//Function Name: ChkEven
//Description  : Used to check whether number is even or not
//Input        : Integer
//Output       : Integer
//Author       : Rupali Bramhadev Kuskar
//Date         : 19/04/2022
//
///////////////////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if(iNo%2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////////////////////////////////////////
//Program to accept number from user and check whether number is even or not
/////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is not Even number\n",iValue);
    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////
//Input : 12 
//Output: 12 is Even number
/////////////////////////////////////////////////////////////////////////
