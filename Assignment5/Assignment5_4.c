/*
Program which accept number from user and return summation of all its non factors
Input: 12
Output: 50

Input : 10
Output : 37

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: NonFact
//Description  : Used to display summation of non factors 
//Input        : Integer
//Output       : Integer
//Author       : Rupali Bramhadev Kuskar
//Date         : 21/04/2022
//
/////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }

    }
    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////
//Program to accept number from user and display summation of its non factors 
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////
//Input : 12
//Output: 50
/////////////////////////////////////////////////////////////////////////