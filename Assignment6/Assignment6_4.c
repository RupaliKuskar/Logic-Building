/*
Program which accept number from user and count frequency of 4 in it

Input: 2395
Output: 0

Input: 1018
Output : 0

Input: 9440
Output :2

Input : 922432
Output : 1
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//Function Name: CountFour
//Description  : Used to count frequency of 4 in given number
//Input        : Integer
//Output       : Integer
//Date         : 27/04/2022
//Author       : Rupali Bramhadev Kuskar
//
/////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iCount = 0;
    int iFrequency = 4;
    while(iNo > 0)
    {
        if(iNo % 10 == iFrequency)
            iCount++;
        iNo = iNo/10;   
    }
    return iCount;
}

////////////////////////////////////////////////////////////////////////////////
//Program which accept number from user and count frequency of 4 in it
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : 922432
// Output : 1
//
//////////////////////////////////////////////////////////////////////////////