////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Description :   It is used to perform greater number
//  Input :         int
//  Output :        int
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo < 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter NUmber:");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == false)
    {
        printf("Greater");
    }
    else
    {
         printf("Smaller");
    }

    return 0;
}
