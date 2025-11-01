
////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>              //For Input Output

////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayFactor
//  Description:    It is use to print even factor of that number
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           17/10/2025
//
////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)                     //Updater
    {
        iNo = -iNo;
    }
     for (i=1; i <= iNo; i++)
    {
       if((i % 2)==0)
       {
         printf("%d\n",i);
       }
    }

} //end of DisplayFactor

/////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                        //to accept Input
    printf("Enter Number\n");
    scanf("%d",&iValue);
    DisplayFactor(iValue);                  //Function call

    return 0;
}  //end of main

///////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:24        Output: 1  2  4  6  8  12
//
///////////////////////////////////////////////////////////////////