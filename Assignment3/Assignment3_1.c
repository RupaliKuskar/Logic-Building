/*
Program which accept one number from user and print that number of even numbers on screen

Input : 7
Output: 2 4 6 8 10 12 14

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: PrintEven
//Description  : Used to print that number of even numbers on screen
//Input        : Integer
//Output       : Nothing
//Author       : Rupali Bramhadev Kuskar
//Date         : 21/04/2022
//
/////////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        return;
    }
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",2*iCnt);    
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//Program which accept one number from user and print that number of even numbers on screen
///////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////
//Input : 7 
//Output: 2 4 6 8 10 12 14
/////////////////////////////////////////////////////////////////////////
