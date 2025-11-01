///////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>                       //For Input Output

//////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayConvert
//  Description:    It is use to convert case of that character
//  Input:          character
//  Output:         character
//  Author:         Priyanka Vikas Bhor
//  Date:           17/10/2025
//
//////////////////////////////////////////////////////////////////

char DisplayConvert(char CValue)
{
    if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c -> %c\n",CValue, CValue +32);
    }
    else if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c -> %c\n",CValue, CValue -32);
    }
}///end of DisplayConvert

///////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
//////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';               //To accept input
    printf("Enter Character\n");

    scanf("%c",&cValue);
    DisplayConvert(cValue);           //Function call

    return 0;
}///end of main

/////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:a        Output: A
//
//  Input:D       Output: d
//
//////////////////////////////////////////////////////////////////////