///////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>                  //For Input Output

///////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayEvenFactor
//  Description:    It is use to print even factor of that number
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           17/10/2025
//
///////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)                //Updater
    {
        iNo = - iNo;
    }
    for(i =1; i < iNo; i++)
    {
        if((iNo % i)==0 && (i % 2)==0)
        {
            printf("%d\n",i);
        }
    }
} //end of DisplayEvenFactor

////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                     //to accept input
    printf("Enter number\n");

    scanf("%d",&iValue);
    DisplayEvenFactor(iValue);          //Function call
    return 0;
}//end of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:36        Output: 2   4   6   12   18
//
//////////////////////////////////////////////////////////////////////