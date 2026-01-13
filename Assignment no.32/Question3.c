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

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("* ");
            }
            
            else if(i + j == iCol + 1)
            {
                printf("* ");
            }
            else
            {
                printf("  "); 
            }
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
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    Pattern(r, c);

    return 0;
}
