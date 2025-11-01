//////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>         //for input output

///////////////////////////////////////////////////////////////////////////
//
//  Function Name:  MultFact
//  Description:    It is use to display its multiplication of factors
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           18/10/2025
//
/////////////////////////////////////////////////////////////////////////////


int MultFact(int iNo)
{
    int iCnt = 0;
    int Multi = 1;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo%iCnt==0)
        {
            Multi = Multi*iCnt;
        }
    }
    return Multi;
}///End of MultFact

/////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;               //To accept input
    int iRet = 0;                 // to stoare result

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet =  MultFact(iValue);            //Function call

    printf("%d",iRet);

    return 0;

}//end of main

/////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:12        Output: 144
//
//  Input:13        Output: 1
//
//  Input:10        Output: 10
//
////////////////////////////////////////////////////////////////////////