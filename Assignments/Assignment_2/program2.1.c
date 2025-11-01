///////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to print that number of * on screen
//  Input:          integer
//  Output:         character
//  Author:         Priyanka Vikas Bhor
//  Date:           16/10/2025
//
//////////////////////////////////////////////////////////////////

void Display(int iNo)                           
{
    int iCnt = 0;
    if(iNo < 0)                                //updater
    {
        iNo = -iNo;
    }
    while(iCnt < iNo)
    {
        printf("*\t");
        iCnt++;

    }
}///End of Display

////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;                           //To accept input

    printf("Enter Number:");
    scanf("%d",&iValue);

    Display(iValue);                      //Function Call
    return 0;
}///End of min