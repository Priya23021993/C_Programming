/* write a program which accept string from user and accept one character.
   Return index of first occurence of that character.

   Input  : "Marvellous Multi OS"
             M

   Output :  0

   Input  : "Marvellous Multi OS"
             W
             
   Output :  -1

   Input : "Marvellous Multi OS"
            e

   OutPut : 4

*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
           return i;
        } 
        i++;
    }
   return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int  iRet = 0;

    printf("Enetr String :\n");
    scanf ("%[^'\n']s",arr);

    printf("Enter the character :");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character Location is : %d",iRet);

    return 0;
}