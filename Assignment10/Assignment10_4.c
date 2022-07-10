/*
Program which Accept N numbers from user and accept Range, Display all elements from that range.
Input: N : 6
       Start : 66
       End : 90
       Elements: 85 66 3 76 93 88       
Output: 66 76 88

Input: N : 6
       NO: 30
       End : 50
       Elements: 85 66 3 76 93 88      
Output: 
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Range
//Description  : Used to v
//Input        : Integer,Integer,Integer,Integer
//Output       : Nothing
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
        {
            printf(" %d ",Arr[iCnt]);
        }
    }
    return ;
       
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Program which Accept N numbers from user and accept Range, Display all elements from that range.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue1 = 0,iValue2;
    int *p = NULL;

    printf("Enter The Number Of Elements => ");
    scanf("%d",&iSize);

    printf("Enter the starting point = > ");
    scanf("%d",&iValue1);

    printf("Enter the ending point = > ");
    scanf("%d",&iValue2);

    p=(int *)malloc(iSize*(sizeof(int)));

    if(p==NULL)
    {
        printf("Unable To Allocate Memory !!!");
        return -1;
    }
  
    printf("\nEnter %d elements",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\nEnter element : %d => ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Range (p,iSize,iValue1,iValue2);
    free(p);
    return 0;
}


///////////////////////////////////////////////////////////////////////////////
//
// Input : N = 6 iStart = 66 iEnd = 90  Elements: 85 66 3 93 76 88
// Output :  85  66  76  88
//
//////////////////////////////////////////////////////////////////////////////

