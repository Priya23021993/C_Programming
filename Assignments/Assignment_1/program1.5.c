//////////////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name:  Accept
//  Description:    It is use to print that number of * on Scrren
//  Input:          integer
//  Output:         Character
//  Author:         Priyanka Vikas Bhor
//  Date:           15/10/2025
//
/////////////////////////////////////////////////////////////////

void Accept(int iNo)        
{
    int iCnt = 0;
    for(iCnt=1; iCnt<= iNo; iCnt++)
    {
        printf("*\t");
    }
}///End of Accept

//////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;                       //To aacept the inputs
    iValue = 5;                          //To accept the inputs
    
    Accept(iValue);                      //Function call

    return 0;
}////End of main