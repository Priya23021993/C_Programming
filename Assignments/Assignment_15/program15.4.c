
//Time Complexity:O(N)

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file                              
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                 //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  MultDigits
//  Description:    It is use to accept number from user and return multiplication of all.
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////


int MultDigits(int iNo)
{
    int iDigit= 0,iMult = 1;

    if(iNo < 0)                                     //updater
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;                           //extract last digit
        
        if(iDigit != 0)
        {
           iMult = iMult * iDigit;
        }
     iNo = iNo / 10;                                  //remove last digit
    
    }
       return iMult;
}//end of MultDigits

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                    //to accept input
    int iRet = 0;                                       //to stoare result

    printf("Enter Number:");
    scanf("%d",&iValue);
   
    iRet = MultDigits(iValue);                          //function call

   printf("Multiplication of all digit is:%d\n",iRet);
    

    return 0;
}//end of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:2395         Output: 270
//
//  Input:1018        Output: 8
//
////////////////////////////////////////////////////////////////////////////////////////