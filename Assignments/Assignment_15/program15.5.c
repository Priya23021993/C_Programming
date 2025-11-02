
//Time Complexity:O(N)

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file                              
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                  //for input output

//////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountDiff
//  Description:    It is use to accept number from user and return difference between
//                  summation of even digits & summmation of odd digits.
//  Input:          integer
//  Output:         integer
//  Author:         Priyanka Vikas Bhor
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////


int CountDiff(int iNo)
{
    int iDigit= 0;
    int iEvenSum = 0;
    int iOddSum;

    if(iNo < 0)                                      //updater
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;                            //extract last digit
        
        if((iDigit % 2)== 0)
        {
           iEvenSum = iEvenSum + iDigit;                //Business logic
        }
        else
        {
            iOddSum = iOddSum +iDigit;                   //Business logic
        }
     iNo = iNo / 10;                                   //remove last digit
    
    }
       return iEvenSum - iOddSum;
}//end of CountDiff

////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery point function for the Application
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;                                    //to accept input
    int iRet = 0;                                      // to stoare result
 
    printf("Enter Number:");
    scanf("%d",&iValue);
   
    iRet = CountDiff(iValue);

   printf("Difference is:%d\n",iRet);
    

    return 0;
}//end of main
////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//  
//  Input:2395         Output: -15
//
//  Input:1018         Output: 6
//
////////////////////////////////////////////////////////////////////////////////////////