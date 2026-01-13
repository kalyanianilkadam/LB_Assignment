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

void Pattern(int n)
{
    int i, j;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            
            if(i == 1 || i == n || j == 1 || j == n)
            {
                printf("%d", j);
            }
    
            else if(i == j)
            {
                printf("%d", j);
            }
            else
            {
                printf(" "); 
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
    int n;

    printf("Enter size of pattern: ");
    scanf("%d", &n);

    Pattern(n);

    return 0;
}
