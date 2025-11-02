//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file                              
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                      //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Count
//  Description:    It is use to accept number from user and count frequency of such a 
//                  digits which are less than 6.
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           28/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////


int Count(int iNo)
{
    int iDigit= 0,iCnt = 0;

    if(iNo < 0)                                   //updater
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;                        //extract last digit 
        
        if(iDigit < 6)
        {
           iCnt++;
        }
     iNo = iNo / 10;                               //remove last digit
    
    }
       return iCnt;
}//end of Count

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{ 
    int iValue = 0;                                 //to accept input
    int iRet = 0;                                   //to stoare result

    printf("Enter Number:");
    scanf("%d",&iValue);
   
    iRet = Count(iValue);                             //function call

   printf("Count of digits less than 6 is:%d\n",iRet);
    

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:2395       Output: 3
//
//  Input:1018        Output: 3
//
////////////////////////////////////////////////////////////////////////////////////////