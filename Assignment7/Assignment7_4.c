/*
Program which accept number from user and return multiplication of all digits
Input: 2395
Output: 270

Input: 1018
Output : 0

Input: 9440
Output : 0

Input : 922432
Output : 864
*/

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//Function Name: MultDigits
//Description  : Used to get multiplication of all digits
//Input        : Integer
//Output       : Integer
//Date         : 27/04/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////// 
int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    int iCnt = 0;

    if(iNo < 0) 
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iMult = iDigit * iMult;
        iNo = iNo /10;
    }
    return iMult;

}

////////////////////////////////////////////////////////////////////////////////
//Program which accept number from user and return multiplication of all digits
///////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : 2395
// Output : 270
//
//////////////////////////////////////////////////////////////////////////////

