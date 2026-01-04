/* write a program which accept string from user and toggle the case.

   Input : "Marvellous Multi OS"


   Output : mARVELLOUS mULTI os

*/

#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        } 
        else if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enetr String :\n");
    scanf ("%[^'\n]s",arr);

    strtogglex(arr);

    printf("Modified String is : %s\n",arr);

    return 0;
}