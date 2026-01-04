
/* write a program which accept string from user and toggle the case.

   Input : "marve8911ous121"

   Output : 89121

   Input : "Demo"

   Output: 

*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
     str++;
    }
}
int main()
{
    char arr[20];

    printf("Enetr String :\n");
    scanf ("%[^'\n]s",arr);

    DisplayDigit(arr);

    return 0;
}