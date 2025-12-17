///////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description :   It is used to display muktiplication Factors
//  Input :         int ,int
//  Output :        int
//  Author :        Kalyani Anil Kadam.
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo<=0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt< iNo; iCnt++)
    {
        if((iNo %iCnt)==0)
        {
            iMult = iMult *iCnt;
        }
    }
    return iMult;
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}
