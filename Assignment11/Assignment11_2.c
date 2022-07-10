/*
Program which Accept N numbers from user and return the smallest number
Input: N : 6
       Elements: 85 66 3 66 93 88       
Output: 93

*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Minimum
//Description  : Used to return return the smallest number
//Input        : Integer
//Output       : Integer
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////////////////

int Minimum(int Arr[],int iLength)
{
    int iCnt=0,iMin=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]<iMin || iCnt==0)
        {
            iMin=Arr[iCnt];
        }
    }
    return iMin;
}

/////////////////////////////////////////////////////////////////////////////////////
//Program which Accept N numbers from user and return smallest number
////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iCnt = 0,iRet=0;
    int *p = NULL;

    printf("Enter number of elements =>");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*(sizeof(int)));

    if(p==NULL)
    {
        printf("Unable To Allocate Memory ");
        return -1;
    }
  
    printf("\nEnter %d elements: ",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\nEnter The Element %d => ",iCnt+1);
            scanf("%d",&p[iCnt]);
    }

    iRet=Minimum(p,iSize);
    printf("Smallest number is %d",iRet);    
    
    free(p);
    return 0;
}


///////////////////////////////////////////////////////////////////////////////
//
// Input : N = 6  Elements = 85 66 3 66 93 88
// Output : 3
//
//////////////////////////////////////////////////////////////////////////////

