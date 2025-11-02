//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file                              
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                          //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountEven
//  Description:    It is use to accept number from user and return the count of even.
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit= 0,iCnt = 0;

    if(iNo < 0)                                     //Updater
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;                         //extract last digit
        
        if((iDigit % 2)==0)
        {
           iCnt++;
        }
     iNo = iNo / 10;                              //remove last digit
    
    }
   return iCnt;
}//end of CountEven

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                  //to accept input
    int iRet = 0;                                    //to stoare result

    printf("Enter Number:");
    scanf("%d",&iValue);
   
    iRet = CountEven(iValue);

   printf("Count of even digits is:%d\n",iRet);
    

    return 0;
}//end of main


////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:2395       Output: 1
//
//  Input:1018        Output: 2
//
////////////////////////////////////////////////////////////////////////////////////////