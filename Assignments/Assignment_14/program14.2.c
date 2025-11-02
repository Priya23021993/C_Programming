//Time Complexity:O(N)

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file                              
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                          //for input output
#define TRUE 1                                             //it replace with 1 
#define FALSE 0                                            //it replace with 0

typedef int BOOL;                             //create new name(alias)for exiting data type

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkZero
//  Description:    It is use to accept number from user and check whether it contains
//                  0 in it or not.
//  Input:          integer
//  Output:         boolean
//  Author:         Priyanka Vikas Bhor
//  Date:           28/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit= 0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;                                 //extract last digit 
        if(iDigit == 0)
        {
          return TRUE;
        }
        else{  
        iNo = iNo / 10;                                    //remove last digit
        }
    }
       return FALSE;
}//end of ChkZero

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                  //To accept input
    BOOL bRet = FALSE;                               //to stoare result

    printf("Enter Number:");
    scanf("%d",&iValue);
   
    bRet = ChkZero(iValue);                         //function call

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else{
        printf("There is no Zero\n");
    }

    return 0;
}//end of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:2395       Output: There is no zero
//
//  Input:1018        Output: it contains zero
//
////////////////////////////////////////////////////////////////////////////////////////