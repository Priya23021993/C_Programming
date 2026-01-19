/* Write a recursive program which accept number from user and
  return summation of its digits.

Input:  879

Output: 24

*/

#include<stdio.h>

int Sum(int iNo)
{
    if(iNo == 0)
    {
        return 0;
    }

    return (iNo % 10) + Sum(iNo /10);
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    iRet=Sum(iValue);

    printf("%d",iRet);

    return 0;
}