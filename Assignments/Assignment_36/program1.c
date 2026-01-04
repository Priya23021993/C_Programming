/* write a program which accept string from user and convert it into
   lower Case.

   Input : "Marvellous Multi OS"

   Output : marvellous multi os

*/

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    strlwrx(arr);

    printf("Modified String is : %s\n",arr);

    return 0;
}
