/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : frequency
//  Description :   It is used to display Frequency of elements
//  Input :         int 
//  Output :        int 
//  Author :        Kalyani Anil Kadam.
//  Date :          28/11/2025
//
//////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, Count = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            Count++;
        }
    }
   return Count;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iSize =0, iValue =0;
    int *p = NULL;
    int iRet = 0;
    
    printf("Enter Number of elements:");
    scanf("%d", &iSize);

    printf("Enter Number:");
    scanf("%d", &iValue);

    p = (int*)malloc(iSize *sizeof(int));

    printf("enter the elements:");
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize, iValue);

    printf("Frequency is:%d", iRet);

    free(p);

    return 0;
}