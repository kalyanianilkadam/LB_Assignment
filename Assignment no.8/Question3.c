////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Description :   It is used to display Factorial
//  Input :         int
//  Output :        int
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    printf("(");   

    for ( i = iNo; i > 0; i--)
    {
        printf("%d", i);
        if (i != 1)
        {
            printf("*");
        }
        iFact = iFact * i;
    }

    printf(")\n");   

    return iFact;
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return 0;
}
