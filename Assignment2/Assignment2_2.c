//Program to accept one number of user and print that number of * on screen

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//Function Name: Display
//Description  : Used to display * on screen
//Input        : Integer
//Output       : Nothing
//Author       : Rupali Bramhadev Kuskar
//Date         : 19/04/2022
//
/////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    
    while(iNo >= 1)
    {
        printf("*\n");
        iNo--;
    }
}

////////////////////////////////////////////////////////////////
//Program to display * on Screen
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}


////////////////////////////////////////////////////////////////
//Input : 7
//Output: * * * * * * *
////////////////////////////////////////////////////////////////