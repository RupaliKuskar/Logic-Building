/*
Program which Accept N numbers from user and display summation of digits of each number
       Elements: 8225 665 3 76 953  858
Output:   17  17  3  13  17  21
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: DigitsSum
//Description  : Used to display summation of digits of each number
//Input        : Integer
//Output       : Integer
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
//////////////////////////////////////////////////////////////////////////////////////////

int DigitsSum(int Arr[],int iLength)
{
    int iCnt=0,iTemp=0,iSum=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        iTemp=Arr[iCnt];
        while(iTemp>0)
        {
            iSum+=iTemp%10;
            iTemp/=10;
        }
        printf(" %d ",iSum);
        iSum=0;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Program which Accept N numbers from user and display summation of digits of each number
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

    DigitsSum(p,iSize);
    
    
    free(p);
    return 0;
}


///////////////////////////////////////////////////////////////////////////////
//
// Input : N = 6  Elements = 8225 665 3 76 953  858
// Output:  17  17  3  13  17  21
//
//////////////////////////////////////////////////////////////////////////////

