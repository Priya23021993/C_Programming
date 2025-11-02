//Time Complexity:O(N)
//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file                              
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayDigit
//  Description:    It is use to accept number from user and display it digits in reverse
//                  order.
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           28/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit= 0;

    if(iNo < 0)                                            //Updater
    {
       iNo = - iNo;
    }
    while(iNo !=0)                                       //loop until no becomes 0
    {
        iDigit = iNo % 10;                              //extract last digit                                       
        printf("%d\n",iDigit);
        iNo = iNo / 10;                                  //remove last digit
    }
}//End of DisplayDigit

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                       //to accept input

    printf("Enter Number:");
    scanf("%d",&iValue);

    DisplayDigit(iValue);                                 //function call

    return 0;
}//end of main


////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:2395       Output: 5   9   3  2
//
//  Input:1018        Output: 8   1   0  1
//
////////////////////////////////////////////////////////////////////////////////////////