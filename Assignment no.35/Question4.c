////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description :   It is used to display Vowel
//  Input :         char
//  Output :        char
//  Author :        Kalyani Anil Kadam.
//  Date :          16/12/2025
//
//////////////////////////////////////////////////////////////////////////////

bool ChkVowel(char *str) 
{
    char vowels[] = "aeiouAEIOU";
    int i = 0, j;

    while (str[i] != '\0') 
    {
        for (j = 0; vowels[j] != '\0'; j++)
         {
            if (str[i] == vowels[j]) 
            {
                return true;
            }
        }
        i++;
    }
    return false;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main() {
    char arr[20];
    bool bRet = false;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    bRet = ChkVowel(arr);
    if (bRet == true) {
        printf("Contains Vowel\n");
    } else {
        printf("There is no Vowel\n");
    }

    return 0;
}