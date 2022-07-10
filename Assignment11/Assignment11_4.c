/*
Program which Accept N numbers from user and display all such numbers which contains 3 digits in it
Input: N : 6
       Elements: 8225 665 3 76 953  858
Output:  665  953  858
*/

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Digits
//Description  : Used to display all such numbers which contains 3 digits in it
//Input        : Integer
//Output       : Integer
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
//////////////////////////////////////////////////////////////////////////////////////////

int Digits(int Arr[],int iLength)
{
    int i=0,Temp=0,Cnt=0;

    for(i=0;i<iLength;i++)
    {
        Temp=Arr[i];
        while(Temp>0)
        {
            Cnt++;
            Temp/=10;
        }
        (Cnt!=3)?Cnt=0:printf(" %d ",Arr[i]),Cnt=0;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Program which Accept N numbers from user and display all such numbers which contains 3 digits in it
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

    Digits(p,iSize);
    
    
    free(p);
    return 0;
}


///////////////////////////////////////////////////////////////////////////////
//
// Input : N = 6  Elements = 8225 665 3 76 953  858
// Output:  665  953  858
//
//////////////////////////////////////////////////////////////////////////////

