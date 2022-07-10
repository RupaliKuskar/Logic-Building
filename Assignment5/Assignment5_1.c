/*
Program which accept number from user and display its multiplication of factors

Input: 12
Output: 144 (1*2*3*4*6)

Input: 13
Output: 1 (1)

Input: 10
Output: 10 (1*2*5)

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: MultFact
//Description  : Used to display multiplication of factors
//Input        : Integer
//Output       : Integer
//Author       : Rupali Bramhadev Kuskar
//Date         : 21/04/2022
//
/////////////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1;iCnt<iNo;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iCnt*iMult;
        }

    }
    return iMult;
}

///////////////////////////////////////////////////////////////////////////////////
//Program to accept number from user and display its multiplication of factors
///////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}


//////////////////////////////////////////////////////////////////////////
//Input : 12
//Output: 144
/////////////////////////////////////////////////////////////////////////