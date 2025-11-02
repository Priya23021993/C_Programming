//Time Complexity:O(N)

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  FactorialDiff
//  Description:    It is use to accept number and return difference between even factorial 
//                  and odd Factorial of given number.
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           23/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iOddFact = 1, iEvenFact = 1,iCnt= 0;
    int iDiff = 0;
    if(iNo < 0)                                         //Updater
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       if((iCnt % 2)==0)
       {
          iEvenFact = iEvenFact * iCnt;                 //Business Logic
       }
       else{
             iOddFact = iOddFact * iCnt;                //Business Logic
           }
   }
    iDiff = iEvenFact - iOddFact;
    return iDiff;
}//End of FactorialDiff

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                  //To accept input
    int iRet = 0;                                    //To store result

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d",iRet);

    return 0;
}///End of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:5           Output: -7
//  Input:-10         Output: 2895
//
////////////////////////////////////////////////////////////////////////////////////////