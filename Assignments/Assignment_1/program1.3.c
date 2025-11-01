/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    It is use to print 5 to 1
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           15/10/2025
//
/////////////////////////////////////////////////////////


void Display()
{
    int i= 0;                   // First input
        i=5;                    //Second Input
    
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
}    //End of Display

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    Display();                      //Function call

    return 0;
}    //End of main