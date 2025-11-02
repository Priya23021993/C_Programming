//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file                              
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                  //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountOdd
//  Description:    It is use to accept number from user and return the count of odd.
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit= 0,iCnt = 0;

    if(iNo < 0)                                        //updater
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;                                //extract last digit
        
        if((iDigit % 2)!=0)
        {
           iCnt++;
        }
     iNo = iNo / 10;                                      //remove last digit
    
    }
       return iCnt;
}//end of CountOdd

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;                                   //to accept input
    int iRet = 0;                                     //to stoare result

    printf("Enter Number:");
    scanf("%d",&iValue);
   
    iRet = CountOdd(iValue);                          //function call

   printf("Count of Odd digits is:%d\n",iRet);
    

    return 0;
}//end of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:2395         Output: 3
//
//  Input:-1018        Output: 2
//
////////////////////////////////////////////////////////////////////////////////////////