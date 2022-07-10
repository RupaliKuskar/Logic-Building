/*
Program which Accept N numbers from user and accept one another number as No check whether NO is present or not

Input: N : 6
       NO: 66
       Elements: 85 66 3 80 93 88       
Output: TRUE

Input: N : 6
       NO: 12
       Elements: 85 11 3 80 11 111      
Output: FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Check
//Description  : Used to check is number is present or not
//Input        : Integer
//Output       : Boolean
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;
    
    for(int iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return TRUE;
        }   
    }
    return FALSE;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Program which Accept N numbers from user and accept one another number as No check whether NO is present or not
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iCnt = 0,iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    
    printf("Enter Number of Elements => ");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("\nEnter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize,iValue);
    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
    free(p);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : N = 6 No :66 Elements = 85 66 11 80  93 88
// Output : TRUE
//
//////////////////////////////////////////////////////////////////////////////

