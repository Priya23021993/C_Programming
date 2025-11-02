//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file                              
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                     //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountFour
//  Description:    It is use to accept number from user and count freqency of 4 in it
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           28/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////


int CountFour(int iNo)
{
    int iDigit= 0,iCnt = 0;

    if(iNo < 0)                                           //updater
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;                                 //extract last digit                              
        
        if(iDigit == 4)
        {
           iCnt++;
        }
     iNo = iNo / 10;                                      //remove last digit
    
    }
       return iCnt;
}//end of CountFour

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                 //to accept input
    int iRet = 0;                                   //to Stoare result

    printf("Enter Number:");
    scanf("%d",&iValue);
    
    iRet = CountFour(iValue);                      //function call

   printf("Frequency of 4 is:%d",iRet);
    

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:2395       Output: 0
//
//  Input:9440        Output: 2
//
////////////////////////////////////////////////////////////////////////////////////////