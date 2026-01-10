/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Product
//  Description :   It is used to display multiplication of elements
//  Input :         int 
//  Output :        int 
//  Author :        Kalyani Anil Kadam.
//  Date :          29/11/2025
//
//////////////////////////////////////////////////////////////////////////////


int Product(int Arr[], int iLength)
{
    int iCnt = 0 , iProduct = 1;

    for(iCnt = 0 ; iCnt <iLength; iCnt++)
    {
        if((Arr[iCnt] % 2)!= 0)
        {
            iProduct =  iProduct * Arr[iCnt]; 
        }
    }
    return iProduct;
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

     iRet= Product(p, iSize);

     printf("product is%d", iRet);

    free(p);

    return 0;
}