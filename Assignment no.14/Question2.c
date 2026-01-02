/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkZero
//  Description :   It is used to display number contains zero or not
//  Input :         int 
//  Output :        int 
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////////////

bool ChkZero(int iNo)
{
    while (iNo != 0)
    {
        if(iNo % 10 == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
        return FALSE;
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("enter number:");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no zero");
    }
}