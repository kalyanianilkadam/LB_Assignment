////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : chkEven
//  Description :   It is used to display Even
//  Input :         int
//  Output :        char
//  Author :        Kalyani Anil Kadam.
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////////////////////


bool ChkEven(int iNo)
{
    if(iNo % 2 == 0)
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
    bool bRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("Number is Even");
    }
    else 
    {
        printf("Number is odd");
    }


    return 0;
}