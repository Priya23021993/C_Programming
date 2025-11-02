/////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////

#include<stdio.h>       //For input output

///////////////////////////////////////////////////////////////
//
//  Function Name:  CheckNumberType
//  Description:    It is use check positive,negative or Zero
//  Input:          integer
//  Output:         character
//  Author:         Priyanka Vikas Bhor
//  Date:           19/10/2025
//
///////////////////////////////////////////////////////////////

void CheckNumberType(int num)
{
    if(num > 0)
    { 
        printf("%d is positive\n",num);
    }
    else if(num < 0)
    {
        printf("%d is Negavtive\n",num);
    }
    else
    {
       printf("Number is Zero\n");
    }
}//end of CheckNumberType

///////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
//////////////////////////////////////////////////////////////


int main()

{
    int number;                     //To accept input

    printf("Enter Number:");
    scanf("%d",&number);

    CheckNumberType(number);         //Function call

    return 0;
}//End of Program

