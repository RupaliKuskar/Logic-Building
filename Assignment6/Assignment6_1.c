/*
Program which accept number from user and display its digits in reverse order

Input: 2395
Output: 5
        9
        3
        2

Input: 1018
Output: 8
        1
        0
        1

Input: -1018
Output: 8
        1
        0
       -1

Input: 9000
Output: 0
        0
        0
        0

*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//Function Name: DisplayDigits
//Description  : Used to display Digits 
//Input        : Integer
//Output       : -------
//Date         : 22/04/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////// 

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }
}

///////////////////////////////////////////////////////////////////////////////
//Program to accept number from user and display the digits in reverse order
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : 9000
// Output : 0
//          0
//          0
//          9
//
//////////////////////////////////////////////////////////////////////////////

