//Time Coplexity :O(N)

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                  ///for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  OddFactorial
//  Description:    It is use to accept number and to find odd factorial of given
//                  number.
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           23/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)                                         //Updater
    {
        iNo = - iNo;
    }
    for(iCnt=1; iCnt <= iNo; iCnt+=2)
    {
         iFact = iFact * iCnt;                          //Business Logic
        
    }
    return iFact;
}//end of OddFactorial

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                  //To accept input
    int iRet = 0;                                     //to store result
 
    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);                        //Function call
    printf("Odd Factorial of number is :%d",iRet);

    return 0;
}//End of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:5           Output: 15
//  Input:-10         Output: 945
//
////////////////////////////////////////////////////////////////////////////////////////