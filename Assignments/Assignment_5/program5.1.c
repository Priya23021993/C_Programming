/////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////

#include<stdio.h>         ///For Input Output

/////////////////////////////////////////////////////////
//
//  Function Name:  CheckEvenOdd
//  Description:    It is use to check Even or odd
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           19/10/2025
//
/////////////////////////////////////////////////////////


void CheckEvenOdd(int num)
{
    int iRem = 0;

    iRem = num % 2;

    if(iRem==0)
    {
        printf("It is even Number\n");
    }
    else
    {
      printf("It is odd Number\n");
    }

}//end of CheckEvenOdd

/////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
/////////////////////////////////////////////////////////

int main()
{
    int number;                    //To accept input

    printf("Enter Number");
    scanf("%d",&number);

    CheckEvenOdd(number);          //Function call

    return 0;
}  //End of main