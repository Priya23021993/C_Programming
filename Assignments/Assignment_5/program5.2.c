
/////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////

#include<stdio.h>           //For input output

///////////////////////////////////////////////////////////////
//
//  Function Name:  FindMax
//  Description:    It is use to find maximun of two numbers
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           19/10/2025
//
///////////////////////////////////////////////////////////////

int FindMax(   int a,                  //First input
               int b                   //Second input
           )
{
   if(a > b)
   {
        return a;
   }
   else
   {
        return b;
   }
}

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int num1,num2,result;            //To accept inputs

    printf("Enter Two numbers:");
    scanf("%d%d",&num1,&num2);

    result = FindMax(num1,num2);       //FUnction call
    printf("Maximum is:%d\n",result);
    return 0;
}///End of main