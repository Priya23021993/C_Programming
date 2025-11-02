
////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>             //for input output

///////////////////////////////////////////////////////////////////
//
//  Function Name:  FindLargest
//  Description:    It is use to find largest among three Numbers
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           19/10/2025
//
///////////////////////////////////////////////////////////////////

int FindLargest(   int x,               //First input
                   int y,               //Second input
                   int z                //Third input
               )
{
    if(x >= y && x>=z)
    {
        
        return x;
    }
    else if (y>=z && y >= x)
    {
        return y;
    }
    else
    {
        return z;
    }
}   //End FindLargest

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{

    int a,b,c,result;                // to accept Inputs

    printf("Enter three Number:");
    scanf("%d%d%d",&a,&b,&c);

    result = FindLargest(a,b,c);         //function call

    printf("Largest Number is:%d\n",result);

    return 0;

}///End of main

