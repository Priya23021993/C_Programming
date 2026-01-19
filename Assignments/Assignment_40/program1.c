/* Write a recursive program which display below pattern.

Input:  5

Output:  *   *   *   *   *

*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("*\t");
        Display(iNo - 1);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
