/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Range
//  Description :   It is used to display Range of elements
//  Input :         int 
//  Output :        int 
//  Author :        Kalyani Anil Kadam.
//  Date :          29/11/2025
//
//////////////////////////////////////////////////////////////////////////////


void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt <iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart )&& (Arr[iCnt] <= iEnd ))
        {
            printf("%d", Arr[iCnt]);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iSize =0, iValue1 =0, iValue2 =0;
    int *p = NULL;
    
    printf("Enter Number of elements:");
    scanf("%d", &iSize);

    printf("Enter the starting point:");
    scanf("%d", &iValue1);

    printf("Enter the ending point:");
    scanf("%d", &iValue2);

    p = (int*)malloc(iSize *sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("enter the elements:");
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

     Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}