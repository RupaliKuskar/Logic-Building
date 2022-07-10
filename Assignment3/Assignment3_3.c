/*
Program which accept number from user and print even factorsof that number

Input: 36

Output: 2 6 12 18

*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: DisplayEven
//Description  : Used to display even factors of that number 
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
        if(iNo % i == 0 && i % 2 == 0)
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
//Input : 36 
//Output: 2 4 6 12 18
/////////////////////////////////////////////////////////////////////////


