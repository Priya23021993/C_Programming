//Time Complexity:O(N)

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                              //For Input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to accept number from user and display below pattern
//                    (input - 5 - output-   *  *  *  *  *  #  #  #  #  #)
//  Input:          integer
//  Output:         character
//  Author:         Priyanka Vikas Bhor
//  Date:           23/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)                                              //Updater
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
         printf("#\t");
     }

}///End of Display

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                    //To accept input

    printf("Enter Number:");
    scanf("%d",&iValue);

    Display(iValue);                                    //Function call

    return 0;
    
}//End of main