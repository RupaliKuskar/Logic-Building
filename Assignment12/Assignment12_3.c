/*
Program to accept number from user and display below pattern
Input : 5
Output: 5       #      4        #      3        #      2        #      1        #
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Pattern
//Description  : Used to display pattern
//Input        : Integer
//Output       : Nothing
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
//////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt = 0;
    

    for(iCnt= 1;iCnt <= iNo;iCnt++)
    {
        printf("%d\t#\t",iCnt);
        
    }
}

////////////////////////////////////////////////////////////////////////////////////////////
//Program to accept number from user and display below pattern
////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("Enter The Number Of Elements => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////
//
// Input : 5
// Output: 5     #      4        #      3        #      2        #      1        #
//
//////////////////////////////////////////////////////////////////////////////////
