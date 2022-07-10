/*
Program to accept number from user and display below pattern
Input : 8
Output: 2       4       6       8       10      12      14      16
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Pattern
//Description  : Used to display pattern
//Input        : Integer
//Output       : Nothing
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
////////////////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt = 0;
    

    for(iCnt= 1;iCnt <= iNo;iCnt++)
    {
        printf("%d\t",iCnt*2);
        
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//Program to accept number from user and display below pattern
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("Enter The Number Of Elements => ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : 8
// Output: 2       4       6       8       10      12      14      16
//
///////////////////////////////////////////////////////////////////////////////////////////////////
