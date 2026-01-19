/* Write a recursive program which accept number from user and
  return its product of digits.

Input:  523

Output: 30

*/

#include<stdio.h>

int Multi(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }
    else
    {
       return (iNo % 10) * Multi(iNo / 10);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    iRet=Multi(iValue);

    printf("%d",iRet);

    return 0;
}