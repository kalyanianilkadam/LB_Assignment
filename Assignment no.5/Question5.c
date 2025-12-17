////////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description :   It is used to display largest number
//  Input :         int ,int, int
//  Output :        int, int , int
//  Author :        Kalyani Anil Kadam.
//  Date :          26/10/2025
//
/////////////////////////////////////////////////////////////////////////////////

int FindLargest(int x, int y, int z)
{
    if (x >= y && x>= z)
    {
        return x;
    }
    else if(y >= x && y >= z)
    {
        return y;
    }
    else 
    {
        return z;
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int a, b, c, result;

    printf("Enter three Number:");
    scanf("%d %d %d",&a,&b,&c);

    result = FindLargest(a, b, c);
    printf("Largest number:%d\n",result);

    return 0;
}

