/*
Program which Accept N numbers from user and accept one another number as No return index of first occurance of that NO
Input: N : 6
       NO: 66
       Elements: 85 66 3 80 93 88       
Output: 1

Input: N : 6
       NO: 12
       Elements: 85 11 3 80 11 111      
Output: -1
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: FirstOcc
//Description  : Used to return index of first occurance of that NO
//Input        : Integer
//Output       : Integer
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int FirstOcc(int Arr[],int iNo,int iLen)
{
    int i=0,iCnt=0;

    for(i=0;i<iLen;i++,iCnt++)
    {
        if(Arr[i]==iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Program which Accept N numbers from user and accept one another number as No return index of first occurance of that NO
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo=0,i=0,iNo2=0,iRet=0;
    int *p = NULL;

    printf("Enter The Number Of Elements => ");
    scanf("%d",&iNo);
    printf("Enter The Number To Find => ");
    scanf("%d",&iNo2);

    p=(int *)malloc(iNo*(sizeof(int)));

    if(p==NULL)
    {
        printf("Failed To Allocate Memory !!!");
        return 1;
    }
    else
    {
        printf("Enter The Elements\n");
        for(i=0;i<iNo;i++)
        {
            printf("\nEnter The Element %d => ",i+1);
            scanf("%d",&p[i]);
        }
        iRet=FirstOcc(p,iNo2,iNo);

        if(iRet==-1)
        {
            printf("There Is No Such Number");
        }
        else
        {
            printf("Index Number Of First Occurrence Of %d Is %d",iNo2,iRet);
        }
    }
    free(p);
    return 0;
}


///////////////////////////////////////////////////////////////////////////////
//
// Input : N = 6 No :66 Elements = 85 66 11 80  93 88
// Output : Index Number Of First Occurrence Of 66 Is 1
//
//////////////////////////////////////////////////////////////////////////////

