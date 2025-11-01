/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function Name:  Divide
//  Description:    It is use to perform division.
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           15/10/2025
//
/////////////////////////////////////////////////////////

int Divide(   int iNo1 ,            //First Input
               int iNo2             //Second input
          ) 
{
    int iAns = 0;                   //to stoar the result                    

    if(iNo2 > iNo1)
    {
        return -1;                
    }
    iAns = iNo1 / iNo2;               //Business logic
    return iAns;
}    //End of Divide

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2= 5;       //to accept inputs
    int iRet = 0;                    //to stoare the result

    iRet = Divide(iValue1,iValue2);       //Function call

    printf("Division is :%d",iRet);

    return 0;
}    //End of main
