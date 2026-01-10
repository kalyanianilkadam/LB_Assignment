/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
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
    int i = 0;
    int j =0, k= 0;

    for(i = 1; i <= iRow; i++)
    {
        k = i;
        for(j = 1; j <= iCol ; j++)
        {
            printf("%d\t", k);
            k += iRow;
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
    int iValue1 = 0, iValue2 = 0;
     
    printf("Enter number of rows:");
    scanf("%d", &iValue1);

     printf("Enter number of columns:");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

}