/*
Program which Accept number from user and return difference between summation of even digits and summation of odd digits
Input: 2395
Output: -15

Input: 1018
Output : 6

Input: 9440
Output : -1

Input : 922432
Output : -2
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: EvenOdd
//Description  : Used to get difference between summation of even digits and summation of odd digits
//Input        : Integer
//Output       : Integer
//Date         : 27/04/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////
int EvenOdd(int iNo)
{
    int iDig=0,iEven=0,iOdd=0;

    while(iNo>0)
    {
        iDig=iNo%10;

        if(iDig%2==0)
        {
            iEven+=iDig;
        }
        else
        {
            iOdd+=iDig;
        }
        iNo/=10;
    }

    return iEven-iOdd;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Program which Accept number from user and return difference between summation of even digits and summation of odd digits
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = EvenOdd(iValue);

    printf("%d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : 2395
// Output : -15
//
//////////////////////////////////////////////////////////////////////////////

