////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial
//  Description :   It is used to display special character
//  Input :         char
//  Output :        char
//  Author :        Kalyani Anil Kadam.
//  Date :          16/12/2025
//
//////////////////////////////////////////////////////////////////////////////

bool ChkSpecial(char ch)
{
    return (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*');
}


///////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if (bRet == true)
    {
        printf("It is a special Character\n");
    }
    else
    {
        printf("It is not a special Character\n");
    }

    return 0;
}