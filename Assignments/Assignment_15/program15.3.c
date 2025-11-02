
//Time Complexity:O(N)
//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file                              
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountRange
//  Description:    It is use to accept number from user and return the count of digit
//                  between 3 and 7.
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit= 0,iCnt = 0;

    if(iNo < 0)                                     //updater
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;                          //extract last digit
        
        if((iDigit > 3) && (iDigit < 7))
        {
           iCnt++;
        }
     iNo = iNo / 10;                                 //remove last digit
    
    }
       return iCnt;
}//end of CountRange

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                        //to accept input
    int iRet = 0;                                          // to store result

    printf("Enter Number:");
    scanf("%d",&iValue);
   
    iRet = CountRange(iValue);                             //function call

   printf("Count of digits between 3 & 7 is:%d\n",iRet);
    

    return 0;
}//end of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:2395         Output: 1
//
//  Input:1018        Output: 0
//
////////////////////////////////////////////////////////////////////////////////////////