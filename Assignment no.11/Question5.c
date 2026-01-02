//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description :   It is used to display Starting point to Ending point in reverse order
//  Input :         int , int
//  Output :        int , int
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iEnd; iCnt >= iStart ; iCnt--)
    {
        printf("%d\t",iCnt);
    }

    if(iStart>=iEnd)
    {
        printf("Invalid Range");
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point");
    scanf("%d",&iValue1);

     printf("Enter ending Point");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
