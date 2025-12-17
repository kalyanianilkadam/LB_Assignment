////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : OddFactorial
//  Description :   It is used to display odd Factorial
//  Input :         int
//  Output :        int
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    printf("(");


    for (i = iNo; i >= 1; i--)
    {
        if ((i % 2 != 0))
        {
            printf("%d", i);
            if (i > 2)
            {
                printf("*");
            }
            iFact = iFact * i;
        }
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

    iRet = OddFactorial(iValue);

    printf("odd Factorial of number is %d\n", iRet);

    return 0;
}
