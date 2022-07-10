//Program to accept an number from user if number is less than 10 print "Hello" otherwise print "Demo"

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//Function Name: Display
//Description  : Used to display Hello or Demo on screen
//Input        : Integer
//Output       : Nothing
//Author       : Rupali Bramhadev Kuskar
//Date         : 19/04/2022
//
/////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////
//Program to accept an number from user if number is less than 10 print "Hello" otherwise print "Demo"
////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter number:\n");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//Input : 5
//Output: Hello
////////////////////////////////////////////////////////////////