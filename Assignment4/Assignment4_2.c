/*
Program whichaccept number from user and display its factors in decreasing order

Input: 12
Output: 6 4 3 2 1

Input: 13
Output : 1

Input : 10
Output : 5 2 1

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: FactRev
//Description  : Used to display factors in reverse order
//Input        : Integer
//Output       : void
//Author       : Rupali Bramhadev Kuskar
//Date         : 21/04/2022
//
/////////////////////////////////////////////////////////////////////////////////////////
void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo-1;iCnt>=1;iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }

    }
}

///////////////////////////////////////////////////////////////////////////////////
//Program to accept number from user and display its factors in reverse order
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////
//Input : 12
//Output: 6 4 3 2 1
/////////////////////////////////////////////////////////////////////////