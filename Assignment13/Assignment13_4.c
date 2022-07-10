/*
Program to accept of rows and columns from user and display below pattern
Input : 3  4
Output: *       #       *       #
        *       #       *       #
        *       #       *       #
*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Pattern
//Description  : Used to display pattern
//Input        : Integer,Integer
//Output       : Nothing
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
////////////////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow,int iCol)
{
    int i = 0,j= 0;
    
     for(i = iRow;i>=1;i--)
    {
        for(j = iCol;j>=1;j--)
        {
            printf("*\t#\t",i,j--);
        }
        printf("\n");
    }
    
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//Program to accept of rows and columns from user and display below pattern
/////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter The Number Of Rows and Columns => ");
    scanf("%d \t %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input :  3 4
// Output:  *       #       *       #
//          *       #       *       #
//          *       #       *       #
//
///////////////////////////////////////////////////////////////////////////////////////////////////
