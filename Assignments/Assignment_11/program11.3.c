//Time Complexity:O(N)

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                    //For input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  RangeDisplaySum
//  Description:    It is use to accept range from user and return addition of all numbers
//                  in between that range(range should contains + numbers only)
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

int RangeDisplaySum(  int iStart ,                        //First input
                      int iEnd                            //Second input
                   )
{
    int i= 0, iSum = 0;
  
    if(iStart > iEnd || iStart < 0 || iEnd <0)
    {
        printf("Invalid Range\n");
        return 0;
    }
    for(i = iStart; i<= iEnd; i++)
    {
        iSum = iSum + i;                               //Business logic
    }
    return iSum;   
}//end of RangeDisplaySum

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
  int iValue1 = 0, iValue2= 0;                           //To accept inputs
  int iRet = 0;                                          //to store result

  printf("Enter Starting Point:");
  scanf("%d",&iValue1);
  printf("Enter Ending Point:");
  scanf("%d",&iValue2);

  iRet = RangeDisplaySum(iValue1 , iValue2);              //Function call

  printf("Addition is:%d",iRet);
   return 0;
}//end of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:23   30             Output:212
//
//  Input:10   18             Output:126
//
//  Input:-10   2             Output:Invalid range
//
//  Input:90    18            Output:Invalid range
//
////////////////////////////////////////////////////////////////////////////////////////