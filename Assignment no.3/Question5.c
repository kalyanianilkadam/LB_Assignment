///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description :   It is used to check Vowel
//  Input :         char
//  Output :        char
//  Author :        Kalyani Anil Kadam.
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////////////////////

char ChkVowel(char cValue)
{
    if(cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u'||
        cValue=='A'||cValue=='E'||cValue=='I'||cValue=='O'||cValue=='U')
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter Character:");
    scanf("%c",&cValue);

    bRet= ChkVowel(cValue);

    if(bRet== TRUE)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }
    return 0;
}