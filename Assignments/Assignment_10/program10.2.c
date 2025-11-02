//Time Complexity:O(1)

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   //For input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  RectArea
//  Description:    It is use to accept width & height of rectangle from user and
//                  calculate it's area (Area = width * Height)
//  Input:          float
//  Output:         double
//  Author:         Priyanka Vikas Bhor
//  Date:           24/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

double RectArea(  float fWidth,                        //First input
                  float fHeight                        //Second input
               )
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;                         //Business Logic
    return dArea;
}//End of RectArea

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;                       //To accept inputs
    double dRet = 0.0;                                        //To store result

    printf("Enter Width:");
    scanf("%f",&fValue1);

    printf("Enter Height:");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);                          //Function call

    printf("Area of Rectangle is :%f",dRet);

    return 0;
}///End of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:5.3  9.78         Output: 51.834
//
////////////////////////////////////////////////////////////////////////////////////////
