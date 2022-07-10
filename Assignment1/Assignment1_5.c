//Program to accept one number of user and print that number of * on screen

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//Function Name: Accept
//Description  : Used to display * on screen
//Input        : Integer
//Output       : Nothing
//Author       : Rupali Bramhadev Kuskar
//Date         : 19/04/2022
//
/////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\n");
    }
}

////////////////////////////////////////////////////////////////
//Program to display * on Screen
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    iValue = 5;
    
    Accept(iValue);
    return 0;
}


////////////////////////////////////////////////////////////////
//Output: 
//Marvellous
//Marvellous
//Marvellous
//Marvellous
//Marvellous
////////////////////////////////////////////////////////////////