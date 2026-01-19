/* Write a recursive program which accept number from user and
  return its factorial.

Input:  5

Output: 120

*/

#include<stdio.h>

int Fact(int iNo)
{
    if(iNo <= 1)
    {
        return 1;
    }
    else
    {
       return iNo * Fact(iNo - 1);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    iRet=Fact(iValue);

    printf("%d",iRet);

    return 0;
}