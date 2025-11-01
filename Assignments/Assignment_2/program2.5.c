///////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////

#include<stdio.h>               //for input output
#include<stdbool.h>             //for bool datatype

//////////////////////////////////////////////////////////////
//
//  Function Name:  ChkEven
//  Description:    It is use to print number is even or odd
//  Input:          integer
//  Output:         boolean
//  Author:         Priyanka Vikas Bhor
//  Date:           16/10/2025
//
///////////////////////////////////////////////////////////////


bool ChkEven(int iNo)
{
    if(iNo < 0)                  //Updater
    {
        iNo = -iNo;
    }
    if((iNo % 2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}    //End ChkEven

/////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                         //To accept the input
    bool bRet = false;                      //To stoare the Result

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = ChkEven (iValue);                //Function call
    if(bRet == true)
    {
        printf("%d is an Even",iValue);
    }
    else
    {
        printf("%d is an Odd",iValue);
    }
    return 0;
}///end of main