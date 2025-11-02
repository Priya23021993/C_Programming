//Time Complexity:O(N)

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>                                           //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  RangeDisplayEven
//  Description:    It is use to accept range from user and display all even numbers in
//                  between that range
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(  int iStart ,                           //First input
                        int iEnd                               //Second input
                     )
{
    int i= 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    for(i = iStart; i<= iEnd; i++)
    {
        if((i % 2)==0)
        {
        printf("%d\t",i);
        }
    }    
}//End of RangeDisplayEven

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{ 
  int iValue1 = 0, iValue2= 0;                               //To accept input

  printf("Enter Starting Point:");
  scanf("%d",&iValue1);
  printf("Enter Ending Point:");
  scanf("%d",&iValue2);

  RangeDisplayEven(iValue1 , iValue2);                       //Function call
   return 0;
}//End of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:23   35             Output:24  26  28  30  32   34  
//
//  Input:10   18             Output:10  12  14  16  18
//
//  Input:10   10             Output:10 
//
//  Input:-10   10            Output:-10  -8  -6  -4  -2  0  2
//
//  Input:90    18            Output:Invalid range
//
////////////////////////////////////////////////////////////////////////////////////////