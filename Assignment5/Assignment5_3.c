/*
Program which accept number from user and display its non factors 
Input: 12
Output: 5 7 8 9 10 11

Input: 13
Output : 2 3 4 5 6 7 8 9 10 11 12

Input : 10
Output : 3 4 6 7 8 9

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: NonFact
//Description  : Used to display non factors 
//Input        : Integer
//Output       : void
//Author       : Rupali Bramhadev Kuskar
//Date         : 21/04/2022
//
/////////////////////////////////////////////////////////////////////////////////////////
void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d\t",iCnt);
        }

    }
}

///////////////////////////////////////////////////////////////////////////////////
//Program to accept number from user and display its non factors 
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////
//Input : 12
//Output: 5       7       8       9       10      11
/////////////////////////////////////////////////////////////////////////