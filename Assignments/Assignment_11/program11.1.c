//Time Complexity:O(N)

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                  //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  RangeDisplay
//  Description:    It is use to accept range from user and display all numbers in between
//                  that range
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(  int iStart ,                       //First Input
                    int iEnd                           //Second input
                 )
{
    int i= 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    for(i = iStart; i<= iEnd; i++)
    {
        printf("%d\t",i);
    }
}//End of RangeDisplay

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
  int iValue1 = 0, iValue2= 0;                                       //To accept Inputs

  printf("Enter Starting Point:");
  scanf("%d",&iValue1);
  printf("Enter Ending Point:");
  scanf("%d",&iValue2);

  RangeDisplay(iValue1 , iValue2);                                 //Function call
   return 0;
}

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:23   35             Output:23  24  25  26  27  28  29  30  31  32  33  34  35
//
//  Input:10   18             Output:10  11  12  13  14  15  16  17  18
//
//  Input:10   10             Output:10 
//
////////////////////////////////////////////////////////////////////////////////////////