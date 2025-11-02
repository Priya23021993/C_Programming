//Time Complexity:O(1)

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   //For input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DollerToINR
//  Description:    It is use to accept amount in US doller & return its Corresponding 
//                    value in Indian Currency.(Consider 1$ as 70 rupees)
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           23/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

int DollerToINR(int iNo)
{
    int iRate = 70;
    int iAns= 0;
    if(iNo < 0)                                        //Updater
    {
        iNo = -iNo;
    }
    iAns = iNo * iRate;                                //Business Logic

    return iAns;
}//End of DollerINR

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                       //To accept input
    int iRet = 0;                                         //To store Result        

    printf("Enter number of USD:");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);                            //Function call

    printf("Value in INR is :%d",iRet);
    return 0;
}//End of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:10        Output: 700
//  Input:3         Output: 210 
//
////////////////////////////////////////////////////////////////////////////////////////