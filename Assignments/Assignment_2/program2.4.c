///////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to print first number in second number of times
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           16/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void Display(     int iNo,                //Frist input
                 int iFrequency           //Second input
            )
{
    int iCnt = 0;  

    if(iFrequency < 0)                        //Updater
    {
        iFrequency = -iFrequency;
    }
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
        
    }
}//End of display

////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         // To accept input
    int iCount = 0;                          // To accept input

    printf("Enter Number:");
    scanf("%d",&iValue);
    printf("Enter Frequency:");
    scanf("%d",&iCount);

    Display(iValue,iCount);                    //function call

    return 0;
}///End of main

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Inpu1:12      Input2:5         Output: 12 12 12 12 12
//  Inpu1:-2      Input2:3         Output: -2 -2 -2
//  Inpu1:21      Input2:-3        Output: 21 21 21
//  Inpu1:-2      Input2:-0        Output:
//
////////////////////////////////////////////////////////////////////////////////////////////////