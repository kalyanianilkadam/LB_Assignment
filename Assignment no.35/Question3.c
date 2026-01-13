////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description :   It is used to display  difference between capital and samll character
//  Input :         char
//  Output :        char
//  Author :        Kalyani Anil Kadam.
//  Date :          16/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCnt = 0;
    int small = 0, capital = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            small++;  
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            capital++;  
        }
        str++;  
    }

    iCnt = small - capital;  
    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}