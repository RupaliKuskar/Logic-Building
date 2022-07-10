/*
Program which Accept N numbers from user and return the difference between largest and smallest number
Input: N : 6
       Elements: 85 66 3 66 93 88       
Output: 90
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Difference
//Description  : Used to return return the difference between largest and smallest number
//Input        : Integer
//Output       : Integer
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
//////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[],int iLength)
{
    int iCnt=0,iMax=0,iMin=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        (iCnt==0)?iMax=Arr[iCnt],iMin=Arr[iCnt]:(Arr[iCnt]<iMin)?iMin=Arr[iCnt]:(Arr[iCnt]>iMax)?iMax=Arr[iCnt]:iMax;
    }
    return iMax - iMin ;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Program which Accept N numbers from user and return the difference between largest and smallest number
/////////////////////////////////////////////////////////////////////////////////////////////////////////

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

    iRet=Difference(p,iSize);
    printf("Difference is %d",iRet);    
    
    free(p);
    return 0;
}


///////////////////////////////////////////////////////////////////////////////
//
// Input : N = 6  Elements = 85 66 3 66 93 88
// Output : 90
//
//////////////////////////////////////////////////////////////////////////////

