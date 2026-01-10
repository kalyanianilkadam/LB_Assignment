/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : LastOcc
//  Description :   It is used to display last Occurence
//  Input :         int 
//  Output :        int 
//  Author :        Kalyani Anil Kadam.
//  Date :          29/11/2025
//
//////////////////////////////////////////////////////////////////////////////


int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength -1 ; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
   return -1;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iRet = 0, iSize =0, iValue =0;
    int *p = NULL;
    
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

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else 
    {
        printf("Last occurence of number is%d",iRet);
    }

    free(p);

    return 0;
}