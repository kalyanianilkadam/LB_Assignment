////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : multiply
//  Description :   It is used to perform multiplication
//  Input :         int, int , int
//  Output :        int
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 0;
    if (iNo1 != 0 && iNo2 != 0 && iNo3 != 0)
    {
        iMul = iNo1 * iNo2 * iNo3;
    }
    
    else if (iNo1 == 0 && iNo2 != 0 && iNo3 != 0)
    {
        iMul = iNo2 * iNo3;
    }
    else if (iNo2 == 0 && iNo1 != 0 && iNo3 != 0)
    {
        iMul = iNo1 * iNo3;
    }
    else if (iNo3 == 0 && iNo1!= 0 && iNo2 != 0)
    {
        iMul = iNo1 * iNo2;
    } 
    else if(iNo1 != 0 && iNo2 == 0 && iNo3 ==0)
    {
        iMul = iNo1;
    }
    else
    {
        iMul = 0;
    }

    return iMul;
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("enter Three Numbers:");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("multiplication is:%d", iRet);

    return 0;
}

