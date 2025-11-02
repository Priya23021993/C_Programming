//Time Coplexity :O(N)
///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                     //For input ouput

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  EvenFactorial
//  Description:    It is use to accept number and to find even factorial of given
//                  number.
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           23/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)                                           //Updater
    {
        iNo = - iNo;
    }
    for(iCnt=2; iCnt <= iNo; iCnt+=2)
    {
         iFact = iFact * iCnt;                             //Business Logic
        
    }
    return iFact;
}//End of EvenFactorial

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                          //To accept input
    int iRet = 0;                                            //To store Result

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);                             //Function call
    printf("Even Factorial of number is :%d",iRet);

    return 0;
}///End of Main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:5           Output: 8
//  Input:-10         Output: 3840
//
////////////////////////////////////////////////////////////////////////////////////////