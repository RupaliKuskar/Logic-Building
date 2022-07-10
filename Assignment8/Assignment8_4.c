/*
Program which Accept N numbers from user and display all such elements which are divisible by 3 and 5

Input: N : 6
       Elements: 85 66 3 15 93 88

Output: 15
*/

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: Display
//Description  : Used to display all such elements which are even and divisible by 3 and 5
//Input        : Integer
//Output       : Nothing
//Date         : 3/05/2022
//Author       : Rupali Bramhadev Kuskar
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(int iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%3==0) && (Arr[iCnt]%5==0))
        {
           printf("%d\n",Arr[iCnt]);
        }   
    }
    return ;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Program which Accept N numbers from user and display all such elements which are even and divisible by 3 and 5
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

    Display(p, iSize);
    

    free(p);
    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Input : N = 6  Elements = 85 66 3 15 93 88
// Output : 15 
//
//////////////////////////////////////////////////////////////////////////////

