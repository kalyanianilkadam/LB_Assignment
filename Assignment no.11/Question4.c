//////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description :   It is used to display sum of even Starting point to Ending point
//  Input :         int , int
//  Output :        int , int
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd) 
{
    int iSum = 0;
    int i =0;


    if(iStart <= 0 || iEnd <= 0 || iStart > iEnd)
     {
        return -1; 
    }

    for(i = iStart; i <= iEnd; i++)
     {
        if(i % 2 == 0)
        {
            iSum += i;
        }
    }

    return iSum;
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
 {
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
     {
        printf("Invalid range\n");
    }
     else
      {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}
