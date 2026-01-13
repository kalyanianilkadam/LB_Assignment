////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description :   It is used to display capital character
//  Input :         char
//  Output :        char
//  Author :        Kalyani Anil Kadam.
//  Date :          16/12/2025
//
//////////////////////////////////////////////////////////////////////////////

bool ChkAlpha(char ch)
{
    if ((ch >= 65 && ch<=90))
    {
        return TRUE;
    }
        return FALSE;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the character:");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("it is capital character");
    }
    else
    {
        printf("it is not a capital character");
    }
}