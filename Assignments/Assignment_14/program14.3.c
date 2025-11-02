//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file                              
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                    //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountTwo
//  Description:    It is use to accept number from user and count freqency of 2 in it
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           28/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit= 0,iCnt = 0;

    if(iNo < 0)                                          //updater
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;                                //extract last digit 
        
        if(iDigit == 2)
        {
           iCnt++;
        }
        iNo = iNo / 10;                                    //remove last digit
        
    }
       return iCnt;
}//end of CountTwo

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                    //to accept input
    int iRet = 0;                                     //to store result

    printf("Enter Number:");
    scanf("%d",&iValue);
   
    iRet = CountTwo(iValue);                           //Function call  

   printf("Frequency of 2 is:%d",iRet);
    

    return 0;
}//end of main


////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:2395       Output: 1
//
//  Input:1018        Output: 0
//
////////////////////////////////////////////////////////////////////////////////////////