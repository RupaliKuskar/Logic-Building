/*
Program which accept number from user and count frequency of such a digits which are less than 6

Input: 2395
Output: 3

Input: 1018
Output : 3

Input: 9440
Output :3

Input : 96672
Output : 1
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//Function Name: CountTwo
//Description  : Used to count frequency of such a digits which are less than 6
//Input        : Integer
//Output       : Integer
//Date         : 27/04/2022
//Author       : Rupali Bramhadev Kuskar
//
/////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iCount = 0;
    int iFrequency = 6;
    while(iNo > 0)
    {
        if(iNo % 10 < iFrequency)
            iCount++;
        iNo = iNo/10;   
    }
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//Program which accept number from user and count frequency of such digits which are less than 6
//////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet  = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : 96672
// Output : 1
//
//////////////////////////////////////////////////////////////////////////////