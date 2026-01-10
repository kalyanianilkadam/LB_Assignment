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
//  Description :   It is used to display diffrence of even and odd number
//  Input :         int 
//  Output :        int 
//  Author :        Kalyani Anil Kadam.
//  Date :          1/12/2025
//
//////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iOddsum = 0, iEvensum = 0;

    for(iCnt = 1 ; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt]%2 != 0)
        {
            iEvensum += Arr[iCnt];
        }
        else 
        {
            iOddsum +=Arr[iCnt];
        }
        
    }
    return iEvensum - iOddsum;
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