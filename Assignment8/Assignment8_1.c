/*
Program to accept numbers from user and return differnce between summation of even elements and summation of odd elements

Input: N : 6
       Elements: 85 66 3 80 93 88

Output: 53(234 - 181)
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Diifference
//Description  : Used to get difference between summation of even digits and summation of odd digits
//Input        : Integer
//Output       : Integer
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEven=0,iOdd=0;

    for(int iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEven+=Arr[i];
        }
        else
        {
            iOdd+=Arr[i];
        }
    }
    return iEven-iOdd;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Program which Accept number from user and return difference between summation of even digits and summation of odd digits
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

    iRet = Difference(p, iSize);
    printf("\nResult is %d",iRet);

    free(p);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : N = 6  Elements = 85 66 3 80 93 88
// Output : 53
//
//////////////////////////////////////////////////////////////////////////////

