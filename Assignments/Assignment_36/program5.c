
/* write a program which accept string from user and count number of
   white spaces.

   Input : "Marvellous"

   Output : 0

   Input : "MarvellouS Infosystems"

   Output: 1

   Input : India is my country
   Output : 3

*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
     str++;
    }
    return iCnt++;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enetr String :\n");
    scanf ("%[^'\n]s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}