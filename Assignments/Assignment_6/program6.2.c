//Time Complexity:O(1)
//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>             //for input output
#include<stdbool.h>           ////for bool datatype

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkGreater
//  Description:    It is use to check whether that number is greater than 100 or not
//  Input:          integer
//  Output:         Boolean
//  Author:         Priyanka Vikas Bhor
//  Date:           20/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo >= 100)
    {
        return true;
    }
    else
    {
       return false;
    }
} //End of ChkGreater

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int ivalue =0;                     //To accept input  
    bool bRet = false;                 //to store result

    printf("Please enter Number:\n");
    scanf("%d",&ivalue);

    bRet = ChkGreater(ivalue);          //Function call

    if(bRet==true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
      return 0;
}//End of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:101     Output: Greater
//
//  Input:39      Output: Smaller
//
////////////////////////////////////////////////////////////////////////////////////////