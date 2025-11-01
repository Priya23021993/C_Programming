//////////////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>                //for input output
#include<stdbool.h>              //for bool datatype

/////////////////////////////////////////////////////////////////
//
//  Function Name:  Check
//  Description:    It is use to check it is divisible by 5 or not
//  Input:          integer
//  Output:         boolean
//  Author:         Priyanka Vikas Bhor
//  Date:           15/10/2025
//
///////////////////////////////////////////////////////////////////


bool Check(int iNo)               //First Input
{
    if((iNo % 5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}   //End of Check

//////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                    //To accept Input
    bool bRet = false;

    printf("enter number:");
    scanf("%d",&iValue);

    bRet = Check(iValue);                 //Function Call
    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisible by 5");
    }
    return 0;
}///End of main