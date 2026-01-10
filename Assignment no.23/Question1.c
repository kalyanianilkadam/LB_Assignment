/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description :   It is used to display number is present or not
//  Input :         int 
//  Output :        int 
//  Author :        Kalyani Anil Kadam.
//  Date :          29/11/2025
//
//////////////////////////////////////////////////////////////////////////////

int Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
        }
    }
   return false;
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
    bool bRet = false;
    
    printf("Enter Number of elements:");
    scanf("%d", &iSize);

    printf("Enter Number:");
    scanf("%d", &iValue);

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

    bRet = Check(p, iSize, iValue);

    if(bRet == true)
    {
        printf("number is present");
    }
    else 
    {
        printf("number is not present");
    }

    free(p);

    return 0;
}