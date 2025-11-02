//Time Complexity:O(1)

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  Percentage
//  Description:    It is use to accept total marks & obtained marks from user & calculate percentage
//  Input:          integer
//  Output:         float
//  Author:         Priyanka Vikas Bhor
//  Date:           20/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(  int iTotal,                            //First input

                  int iobtained                           //Second input
                )
{
    float fPer = 0.0;

    if (iobtained == 0)
    {
        return 0.0;
    }
    else
    {
       fPer = ((float) iobtained / iTotal) * 100;                    //Business Logic

         return fPer;
    }

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;                             //To accept input

    float fRet= 0.0;                                          // Ton store Result

    printf("please enter total marks:");
    scanf("%d",&iValue1);
    printf("please enter obtained marks:");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);                       //Function call

    printf("percentage is %f",fRet);

    return 0;
}  //End of main

////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:1000   745    Output: 74.50000
//
////////////////////////////////////////////////////////////////////////////////////////
