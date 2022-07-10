/*
Accept one character from user and convert case of that character.

Input: a                       Output: A

Input : D                      Output: d

*/
#include<stdio.h>
#include<ctype.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//Function Name: DisplayConvert
//Description  : Used to convert case of that character
//Input        : Character
//Output       : Nothing
//Author       : Rupali Bramhadev Kuskar
//Date         : 21/04/2022
//
/////////////////////////////////////////////////////////////////////////////////////////


void DisplayConvert(char CValue)
{
    if(islower(CValue))
    {
        printf("%c in uppercase is represented as  %c",CValue,toupper(CValue));
    }

    else if(isupper(CValue))
    {
        printf("%c in lowercase is represented as  %c",CValue,tolower(CValue));
    }

}

///////////////////////////////////////////////////////////////////////////////////////////
//Program to Accept one character from user and convert case of that character.
///////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';

    printf("Enter character\n");

    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}

//////////////////////////////////////////////////////////////////////////
//Input : a
//Output: a in uppercase is represented as  A
/////////////////////////////////////////////////////////////////////////