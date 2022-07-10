/*
Program which accept number from user and return summation of all its non factors
Input: 12
Output: -34 (16-50)

Input : 10
Output : -29 (8-37)

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: FactDiff
//Description  : Used to display summation of all itsfactors and  non factors 
//Input        : Integer
//Output       : Integer
//Author       : Rupali Bramhadev Kuskar
//Date         : 21/04/2022
//
/////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0,iSum2 = 0;
    int iDiff = 0;

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        if(iNo % iCnt != 0)
        {
            iSum2 = iSum2 + iCnt;    
        }

        iDiff = iSum1 - iSum2 ;
        
    }
    return iDiff;
}

///////////////////////////////////////////////////////////////////////////////////
//Program to accept number from user and display summation of its factors and non factors 
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////
//Input : 12
//Output: -34
/////////////////////////////////////////////////////////////////////////