/* Write a program which accept string from user and copy that
   characters of that string into another string by removing
   all white spaces.

   Input:  "Marvel lous Pyth on"

   Output:  "MarvellousPython"
*/

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    int j=0;

    while(*src != '\0')
    {
        if(*src != ' ')
        {
            dest[j] = *src;
            j++;
        }
        src++;
    }    
    dest[j] ='\0';
}

int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30];

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}