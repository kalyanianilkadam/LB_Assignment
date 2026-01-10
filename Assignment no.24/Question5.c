/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Digits
//  Description :   It is used to display sum of digits
//  Input :         int 
//  Output :        int 
//  Author :        Kalyani Anil Kadam.
//  Date :          30/11/2025
//
//////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
    int iNo = Arr[iCnt];
    int iSum = 0;

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);   
            iNo = iNo / 10;            
    }

        printf("Sum of digits of %d = %d\n", Arr[iCnt], iSum);
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iCnt = 0, iSize =0 ;
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

    Digits(p, iSize);

    free(p);

    return 0;
}