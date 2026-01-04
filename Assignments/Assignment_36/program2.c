/* write a program which accept string from user and convert it into
   upper Case.

   Input : "marvellous multi os"


   Output : MARVELLOUS MULTI OS

*/

#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        } 
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enetr String :\n");
    scanf ("%[^'\n]s",arr);

    struprx(arr);

    printf("Modified String is : %s\n",arr);

    return 0;
}