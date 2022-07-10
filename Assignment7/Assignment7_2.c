/*
Program which accept number from user and return count of even digits
Input: 2395
Output: 3

Input: 1018
Output : 2

Input: -1018
Output : 2

Input : 8462
Output : 0
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//Function Name: CountOdd
//Description  : Used to count number of Odd digits in given number
//Input        : Integer
//Output       : Integer
//Date         : 27/04/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////// 

int CountOdd(int iNo)
{
   int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        if(iNo % 2 != 0)
            iCnt++;
            iNo = iNo/10;     
    }
    return iCnt;
}

////////////////////////////////////////////////////////////////////////////////
//Program which accept number from user and return count of odd digits
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : 2395
// Output : 3
//
//////////////////////////////////////////////////////////////////////////////

