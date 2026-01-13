////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display character
//  Input :         char
//  Output :        char
//  Author :        Kalyani Anil Kadam.
//  Date :          16/12/2025
//
//////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z') 
    {
        for (char c = ch; c <= 'Z'; c++) 
        {
            printf("%c ", c);
        }
    }
    else if (ch >= 'a' && ch <= 'z')
     {
        for (char c = ch; c >= 'a'; c--) 
        {
            printf("%c ", c);
        }
    }
    else 
    {
        return;
    }
}


///////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    
    printf("Enter the character: ");
    scanf("%c", &cValue);
    
    Display(cValue);
    
    return 0;
}