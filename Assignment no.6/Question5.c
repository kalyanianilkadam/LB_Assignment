////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description :   It is used to display Percentagew
//  Input :         int
//  Output :        int
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
    float fPer = 0.0;

    if (iNo1 == 0)   
    {
        printf("Total marks cannot be zero.\n");
        return 0.0;
    }

    fPer = ((float)iNo2 / iNo1) * 100;  

    return fPer;
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    float fRet = 0.0;

    printf("please enter total marks:");
    scanf("%d",&iValue1);

     printf("please enter obtained marks:");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is:%f", fRet);

    return 0;
}
