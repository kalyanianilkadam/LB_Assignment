/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : print_even numbers
//  Description :   It is used to display sum of even numbers
//  Input :         int 
//  Output :        int 
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
/////////////////////////////////////////////////////////////////////////////

int print_even_numbers(int limit)
{
    int iCnt = 0;
    int iSum = 0;
    if(limit <= 0)
    {
        limit = -limit;
    }

    for(iCnt = 1; iCnt <=limit; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
             iSum += iCnt;
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
    int limit;

    printf("Enter Number:");
    scanf("%d",&limit);
    printf("%d\n",print_even_numbers(limit));
    return 0;
}
