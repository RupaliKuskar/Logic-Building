/*
Program to accept a character from user and check whether that character is vowel (a,e,i,o,u) or not.

Input: E                Output: TRUE
Input : d               Output: False

*/

#include<stdio.h>
#include<stdbool.h>

typedef bool bRet;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: ChkVowel
//Description  : Used to check is character is vowel or not
//Input        : Character
//Output       : Boolean
//Author       : Rupali Bramhadev Kuskar
//Date         : 21/04/2022
//
/////////////////////////////////////////////////////////////////////////////////////////
bool ChkVowel(char CValue)
{
    if(CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' ||
		CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//Program to accept a character from user and check whether that character is vowel (a,e,i,o,u) or not.

///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter character\n");

    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
}

//////////////////////////////////////////////////////////////////////////
//Input : a
//Output: It is Vowel
/////////////////////////////////////////////////////////////////////////