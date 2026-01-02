/////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : sum_of_even_factors
//  Description :   It is used to display sum of even factors
//  Input :         int 
//  Output :        int
//  Author :        Kalyani Anil Kadam.
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////////////////////

int sum_of_even_factors(int number)
{
    int i = 0;
    int sum = 0;
    for ( i = 1; i < number; i++)  
    {
        if (number % i == 0 && i % 2 == 0)  
        {
            sum += i;
        }
    }
    return sum;
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    printf("Sum of even factors (excluding %d) is: %d\n", number, sum_of_even_factors(number));

    return 0;
}
