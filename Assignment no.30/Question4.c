////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description :   It is used to display Pattern
//  Input :         int 
//  Output :        int 
//  Author :        Kalyani Anil Kadam.
//  Date :          2/12/2025
//
//////////////////////////////////////////////////////////////////////////////

void printPattern(int rows)
 {
    int cols = 5;  

    for(int i = 0; i < rows; i++)
     {
        for(int j = 0; j < cols; j++) 
        {
            if(i == 0 || i == rows - 1) 

                printf("*");

            else if(j == 0 || j == cols - 1)   

                printf("*");

            else

                printf("@");                    
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main() 
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printPattern(rows);  

    return 0;
}
