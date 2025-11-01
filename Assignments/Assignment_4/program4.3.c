////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////
 
#include<stdio.h>         //For input Output

///////////////////////////////////////////////////////////////
//
//  Function Name:  NonFact
//  Description:    It is use to display all its non factors
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           18/10/2025
//
///////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt =0;

    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        if((iNo % iCnt)!= 0)
        {
          printf("%d\t",iCnt);
        }
    }
}///End of NonFact

///////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                 //To accept input

    printf("Enter Number\n");
    scanf("%d",&iValue);

    NonFact(iValue);               //function call

    return 0;
}   //End of main

////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:12        Output: 5  7  8  9  10  11
//
//  Input:13        Output: 2  3  4  5  6  7  8  9  10   11  12
//
//  Input:10        Output: 3   4   6  7  8  9
//
////////////////////////////////////////////////////////////////////////