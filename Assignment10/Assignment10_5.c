/*
Program which Accept N numbers from user and return product of all odd elements
Input: N : 6
       Elements: 15 66 3 70 10 88       
Output: 45

Input: N : 6
       Elements: 44 66 72 70 10 88      
Output: 40
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Product
//Description  : Used to return product of all odd elements
//Input        : Integer
//Output       : Integer
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Product(int Arr[],int iLength)
{
    int iCnt=0;
    int iMult = 0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2 != 0)
        {
            (iMult == 0) ? iMult++:iMult;
            iMult = iMult * Arr[iCnt];
        }
    }
    return iMult;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Program which Accept N numbers from user and return product of all odd elements
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

    iRet=Product(p,iSize);
    printf("Product is %d",iRet);    
    
    free(p);
    return 0;
}


///////////////////////////////////////////////////////////////////////////////
//
// Input : N = 6  Elements = 15 66 3 70 10 88
// Output : 45
//
//////////////////////////////////////////////////////////////////////////////

