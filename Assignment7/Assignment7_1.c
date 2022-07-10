/*
Program which accept number from user and return count of even digits
Input: 2395
Output: 1

Input: 1018
Output : 2

Input: -1018
Output : 2

Input : 8462
Output : 4
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//Function Name: CountEven
//Description  : Used to count number of even digits in given number
//Input        : Integer
//Output       : Integer
//Date         : 27/04/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////// 

int CountEven(int iNo)
{
   int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        if(iNo % 2 == 0)
            iCnt++;
            iNo = iNo/10;     
    }
    return iCnt;
}

////////////////////////////////////////////////////////////////////////////////
//Program which accept number from user and return count of even digits
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : 2395
// Output : 1
//
//////////////////////////////////////////////////////////////////////////////

