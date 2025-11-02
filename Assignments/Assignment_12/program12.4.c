
//Time Complexity:o(N)

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file                              
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                           //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  sum_of_even_factor
//  Description:    It is use to print sum of all  even factors of number
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           26/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int sum_of_even_factors(int number)
{
    int i =0, iSum = 0;
    
    if(number < 0)
    {
        printf("Invalid Number\n");
    }
    for(i=1; i< number; i++)
    {
        if(((i % 2)==0) && ((number % i)==0))
        {
            iSum = iSum + i;                                   //Business logic
        }
    }
    return iSum;
}//End sum_of_even_factors

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int number = 0;                                   //To accept input

    printf("Enter Number:");
    scanf("%d",&number);

    printf("Sum of even Factors:%d\n",sum_of_even_factors(number));


    return 0;
}//End of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:12        Output:12  
//
//  Input:20        Output:16
//
////////////////////////////////////////////////////////////////////////////////////////