
//Time Complexity:O(1)
//////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>                 //for input output
#include<stdbool.h>               //for bool datatype

/////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkEqual
//  Description:    It is use to check number is equal or not
//  Input:          integer
//  Output:         Boolean
//  Author:         Priyanka Vikas Bhor
//  Date:           20/10/2025
//
/////////////////////////////////////////////////////////////////

bool ChkEqual(  
                 int iNo1 ,                //First input
                 int iNo2                  //Second input
              )

{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
       return false;
    }
}   //end of ChkEqual

//////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0;               //to accept inputs
    bool bRet = false;                     // to store Results

    printf("please Enter Two Numbers:\n");
    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);
    if(bRet == true)
    {
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}///end of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:10 10     Output: Equal
//
//  Input:10 12     Output: Not Equal
//
////////////////////////////////////////////////////////////////////////////////////////