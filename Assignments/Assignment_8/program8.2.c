// tIme Complexcity : O(1)

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>     ///For input output

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to accept number and print it into word
//  Input:          integer
//  Output:         character
//  Author:         Priyanka Vikas Bhor
//  Date:           22/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)                               //Updater
    {
        iNo = -iNo;
    }
    
    switch(iNo)
    {
        case 0: printf("Zero");
                break;
        case 1: printf("one");break;

        case 2: printf("Two"); break;

        case 3: printf("Three");break;

        case 4: printf("Four");break;

        case 5: printf("Five");
               break;
        case 6: printf("Six");
              break;
         case 7: printf("Seven");
               break;
         case 8: printf("Eight");
               break;
         case 9:printf("Nine");
               break;
         default:printf("Invalid Number");
               break;
    }
    
}//End of Display

//////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}///End of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:1   Output: one
//  Input:8   Output: Eight
//
////////////////////////////////////////////////////////////////////////////////////////