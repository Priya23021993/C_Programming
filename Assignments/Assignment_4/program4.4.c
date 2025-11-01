
//////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>                   //For Input Output

////////////////////////////////////////////////////////////////////////
//
//  Function Name:  SumNonFact
//  Description:    It is use to print summation of all its non factors.
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           18/10/2025
//
/////////////////////////////////////////////////////////////////////////


int SumNonFact(int iNo)
{
    int iCnt = 0 , iSum = 0;

    for(iCnt =1 ; iCnt <= iNo ; iCnt++)
    {
        if((iNo %iCnt)!=0)
        {
          iSum = iSum + iCnt;
        }
    }
     return iSum;
}

////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue =0;              //To accept input
    int iRet = 0;               // To Store Result

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);       //Function call

    printf("%d",iRet);

    return 0;
}//end of main

////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:12        Output: 50
//
//  Input:13        Output: 77
//
//  Input:10        Output: 37
//
////////////////////////////////////////////////////////////////////////