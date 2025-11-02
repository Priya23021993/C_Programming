//Time Complexity:O(1)

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                       //For input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  FhtoCs
//  Description:    It is use to accept temperature in Fahrenheit and convert it into
//                  Celsius(1 Celsius =(Fahrenheit-32)*(5/9))
//  Input:          float
//  Output:         double
//  Author:         Priyanka Vikas Bhor
//  Date:           24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCelsius= 0.0;

    dCelsius = ((fTemp - 32) * (5.0/9.0));                 //Business Logic

    return dCelsius;

}///End of FhtoCs

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
  float fValue =0.0;                                     //To accept input
  double dRet = 0.0;                                     //to store Result

  printf("Enter Temperature in Fahrenheit :");
  scanf("%f",&fValue);

  dRet = FhtoCs(fValue);                                 //Function call

  printf("Temperature in Celsius:%f\n",dRet);

  return 0;
}///End of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:10        Output: -12.2222
//
//  Input:34        Output:1.11111
//
////////////////////////////////////////////////////////////////////////////////////////