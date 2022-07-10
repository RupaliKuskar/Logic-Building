/*
Program which accept number from user and print even factors of that number

Input : 24
Output: 1 2 4 6 8 12

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: DisplayFactor
//Description  : Used to display factors of that number 
//Input        : Integer
//Output       : Nothing
//Author       : Rupali Bramhadev Kuskar
//Date         : 21/04/2022
//
/////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1;i<iNo;i++)
    {
        if(iNo % i == 0)
        {
            printf("%d\n",i);
        }
            
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//Program which accept number from user and print even factors of that number
///////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////
//Input : 24 
//Output: 1 2 4 6 8 12
/////////////////////////////////////////////////////////////////////////
