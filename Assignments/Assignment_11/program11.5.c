//Time Complexity:O(N)

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////
 
#include<stdio.h>                                    //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  RangeDisplayRev
//  Description:    It is use to accept range from user and display all
//                  numbers in between that range in reverse order
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev( int iStart ,                    //first input
                      int iEnd                        //Second input
                    )
{
    int i= 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    for(i = iEnd; i >= iStart; i--)
    {
        printf("%d\t",i);
    }
}//End of RangeDisplayRev

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{ 
  int iValue1 = 0, iValue2= 0;                            //To accept iNputs

  printf("Enter Starting Point:");
  scanf("%d",&iValue1);
  printf("Enter Ending Point:");
  scanf("%d",&iValue2);

  RangeDisplayRev(iValue1 , iValue2);                       //Function call

   return 0;

}//End of main


////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:23   35            Output:35  34  33  32  31  30  29  28  27  26  25  24  23
//
//  Input:10   18            Output:18  17  16  15  14  13  12  11  10
//
//  Input:-10   10           Output:10
//
//  Input:-10   2            Output:2  1  0  -1  -2  -3  -4  -5  -6  -7  -8  -9  -10
//
////////////////////////////////////////////////////////////////////////////////////////