
/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>         //For input output

/////////////////////////////////////////////////////////
//
//  Function Name:  CheckLeapYear
//  Description:    It is use to Check leap year
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           19/10/2025
//
/////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if(((year % 400) ==0) || ((year % 4) ==0) && ((year % 100 )!= 0))
    {
        printf("%d is a leap year\n",year);
    }
    else
    {
        printf("%d is not a leap Year\n",year);
     }

} //End of CheckLeapYear

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int yr;                     //To accept input

    printf("Enter year:");
    scanf("%d",&yr);

    CheckLeapYear(yr);         //Function call
    return 0;
}///End of main