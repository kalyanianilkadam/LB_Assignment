/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : countEven
//  Description :   It is used to count even number
//  Input :         int 
//  Output :        int 
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo) 
{
    int iDigit = 0, iCount = 0;
    
    if (iNo == 0) 
    return 1; 
    
    if (iNo < 0) {
        iNo = -iNo;
    }
    
    while (iNo != 0) 
    {
        iDigit = iNo % 10;
        if (iDigit % 2 != 0) 
        {
            iCount++;
        }
        iNo /= 10;
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
 {
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);
    
    iRet = CountEven(iValue);
    printf("%d",iRet);
    
    return 0;
}