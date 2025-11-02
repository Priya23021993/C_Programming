//Time Complexity:O(1)

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                      //For INput output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  SquareMeter
//  Description:    It is use to accept area in square feet & covert it into square meter
//                  (1 Square feet = 0.0929 square Meter)
//  Input:          integer
//  Output:         double
//  Author:         Priyanka Vikas Bhor
//  Date:           24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    double dMeter= 0.0;

    dMeter = iNo * 0.0929;                             //Business Logic

    return dMeter;
}//End of SquareMeter

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
  int iValue =0;                                          //To accept input
  double dRet = 0.0;                                      //To stoare result

  printf("Enter area in square feet :");
  scanf("%d",&iValue);

  dRet = SquareMeter(iValue);                             //Function call

  printf("Area in Square Meter:%f\n",dRet);

  return 0;
}///End of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:5         Output:0.464515
//
//  Input:7         Output:0.650321
//
////////////////////////////////////////////////////////////////////////////////////////