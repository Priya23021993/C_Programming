
//////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>           ///For input output

/////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Pattern
//  Description:    It is use to print that number of $ & * on screen
//  Input:          integer
//  Output:         character
//  Author:         Priyanka Vikas Bhor
//  Date:           21/10/2025
//
//////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)                     //Updater
    {
        iNo = -iNo;
    }
       for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("\t$\t*");
    }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                  //To accept input

    printf("Enter number:");

    scanf("%d",&iValue);

    Pattern(iValue);                 // function call

    return 0;
}//End of main