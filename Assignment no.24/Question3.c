/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Diffrence
//  Description :   It is used to display Difference of number
//  Input :         int 
//  Output :        int 
//  Author :        Kalyani Anil Kadam.
//  Date :          28/11/2025
//
//////////////////////////////////////////////////////////////////////////////


int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iMin = Arr[0], iMax = Arr[0];

    for(iCnt = 1 ; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt]> iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax - iMin;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iSize =0 , iRet = 0;
    int *p = NULL;
    
    printf("Enter Number of elements:");
    scanf("%d", &iSize);

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

     iRet= Difference(p, iSize);

     printf("Difference  is%d", iRet);

    free(p);

    return 0;
}