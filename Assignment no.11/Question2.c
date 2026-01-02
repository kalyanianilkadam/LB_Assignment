//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description :   It is used to display Even numbers of Starting point to Ending point
//  Input :         int , int
//  Output :        int , int
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);

        }
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}
