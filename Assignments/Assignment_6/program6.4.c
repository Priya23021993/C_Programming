
////Time Complexity:O(1)

//////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>              //For input output

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Multiply
//  Description:    It is use to accept three numbers and prints its Multiplication
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           20/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////

int Multiply(  int iNo1,                       //First input
               int iNo2,                       //Second input
               int iNo3                        //Third input
            )
{
    int iResult =1;

    if(iNo1 != 0)
    {
        iResult =iResult * iNo1;                //Business logic

    }
     if(iNo2!=0)
    {
         iResult =iResult * iNo2;

    }
     if(iNo3!=0)
    {
         iResult =iResult * iNo3;

    }
    if(iNo1==0&&iNo2==0&&iNo3==0)
    {
        return 0;
    }
    return iResult;
}   ///End Multiply

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
///
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0,iValue3=0;                     //To accept inputs
    int bRet=0;                                            // to store result 

    printf("please Enter Three number:\n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    bRet =Multiply(iValue1,iValue2,iValue3);                //Function call
    
        printf("%d",bRet);

        return 0;
    
}///end of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:5  4  7    Output: 140
//
//  Input:5  0  7    Output: 35
//
////////////////////////////////////////////////////////////////////////////////////////
