/*
Program which accept number from user and count frequency of 2 in it

Input: 2395
Output: 1

Input: 1018
Output : 0

Input: 9000
Output :0

Input : 922432
Output : 3
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//Function Name: CountTwo
//Description  : Used to count frequency of 2 in given number
//Input        : Integer
//Output       : Integer
//Date         : 27/04/2022
//Author       : Rupali Bramhadev Kuskar
//
/////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iCount = 0;
    int iFrequency = 2;
    while(iNo > 0)
    {
        if(iNo % 10 == iFrequency)
            iCount++;
        iNo = iNo/10;   
    }
    return iCount;
}

////////////////////////////////////////////////////////////////////////////////
//Program which accept number from user and count frequency of 2 in it
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : 922432
// Output : 3
//
//////////////////////////////////////////////////////////////////////////////