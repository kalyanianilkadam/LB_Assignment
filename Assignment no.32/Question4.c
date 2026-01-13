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
    int midRow = (iRow + 1) / 2;
    int midCol = (iCol + 1) / 2;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            // Border
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("* ");
            }
            // Right-to-left diagonal
            else if(i + j == iCol + 1)
            {
                printf("# ");
            }
            // Middle cell (for odd-sized square)
            else if(i == midRow && j == midCol)
            {
                printf("# ");
            }
            // Remaining inside space
            else
            {
                printf("$ ");
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
