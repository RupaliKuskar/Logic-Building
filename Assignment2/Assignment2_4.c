/*
Program to accept two numbers from user and display first number in second number of times.

Input: 12  5 
Output: 12 12 12 12 12

Input: -2  3 
Output: -2 -2 -2

Input: 21  -3 
Output: 21 21 21

Input: -2  0
Output: 

*/

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//Function Name: Display
//Description  : Used to display Hello or Demo on screen
//Input        : Integer,Integer
//Output       : Integer
//Author       : Rupali Bramhadev Kuskar
//Date         : 19/04/2022
//
/////////////////////////////////////////////////////////////////

int Display(int iNo,int iFrequency)
{
    int iCnt = 0;

    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\n",iNo);   
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////
//Program to accept two numbers from user and display first number in second number of times.
////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    printf("Enter frequency:\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}

////////////////////////////////////////////////////////////////
//Input : 12 5
//Output: 12 12 12 12 12
////////////////////////////////////////////////////////////////
