////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Description :   It is used to display differece of Factorial
//  Input :         int
//  Output :        int
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int i = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    printf("(");
    for (i = iNo; i >= 1; i--)
    {
        if (i % 2 == 0)    
        {
            iEvenFact = iEvenFact * i;
        }
        else              
        {
            iOddFact = iOddFact * i;
        }
    }

    printf("%d-%d)\n", iEvenFact, iOddFact);

    iDiff = iEvenFact - iOddFact;

    return iDiff;
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

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    return 0;
}
