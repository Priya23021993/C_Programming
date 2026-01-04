/* Write a program which accept string from user and copy that
   characters of that string into another string in reverse order.

   Input:  "Marvellous Python"

   Output:  "nohtyP suollevraM"
*/

#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    int i, j=0;

    while(src[i] != '\0')
    {
        i++;
    }
    i--;

    while(i >= 0)
    {
        dest[j] = src[i];
        j++;
        i--;
    }
    dest[j] ='\0';
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr,brr);

    printf("%s\n",brr);

    return 0;
}
