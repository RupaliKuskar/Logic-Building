/*
Program which Accept N numbers from user and return frequency of 11 from it.
Input: N : 6
       Elements: 85 66 3 80 93 88
Output: 0

Input: N : 6
       Elements: 85 11 3 80 11 111
Output: 2
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Count
//Description  : Used to return frequency of 11 
//Input        : Integer
//Output       : Integer
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(int iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            iFrequency++;
        }   
    }
    return iFrequency;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//Program which Accept N numbers from user and return frequency of 11 from it
/////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter Number of Elements => ");
    scanf("%d",&iSize);

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

    iRet = Count(p, iSize);
    printf("Result is: %d",iRet);
    

    free(p);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : N = 6  Elements = 85 66 3 80 93 88
// Output : 0
//
//////////////////////////////////////////////////////////////////////////////

