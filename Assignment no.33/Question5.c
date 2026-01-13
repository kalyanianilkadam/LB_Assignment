////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <ctype.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplaySchedule
//  Description :   It is used to display Exam Schedule as per division
//  Input :         char
//  Output :        char
//  Author :        Kalyani Anil Kadam.
//  Date :          16/12/2025
//
//////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv) 
{
    
    char div = toupper(chDiv);

    switch(div) 
    {
        case 'A':
            printf("Your exam at 7.00 AM\n");
            break;

        case 'B':
            printf("Your exam at 8.30 AM\n");
            break;

        case 'C':
            printf("Your exam at 9.20 AM\n");
            break;

        case 'D':
            printf("Your exam at 10.30 AM\n");
            break;

        default:
            printf("Invalid division\n");
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
    
    printf("Enter your division: ");
    scanf(" %c", &cValue);  

    DisplaySchedule(cValue);

    return 0;
}