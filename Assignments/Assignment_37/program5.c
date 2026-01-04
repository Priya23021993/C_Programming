/* write a program which accept string from user reverse that string
   in place.

   Input  : "abcd"
             
   Output :  "dcba"

   Input  : "abba"
             
   Output :  "abba"

*/

#include<stdio.h>

void StrRevX(char *str)
{
    char temp;
    int i = 0, j=0;

    while(str[j] != '\0')
    {
           j++;
    }
        j--;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }    
}

int main()
{
    char arr[20];

    printf("Enetr String :\n");
    scanf ("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s\n",arr);

    return 0;
}