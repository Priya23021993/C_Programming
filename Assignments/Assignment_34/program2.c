/* Accept Character from user .If character is small display its
   corresponding capital character, and if it small then display
   it's corresponding capital .in other cases display as it is.

    Input : Q
    Output : q

    Input : 4
    Output : 4

    Input : %
    output :%
   
*/

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c",ch - 32);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("%c",ch + 32);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{ 
    char cValue = '\0';

    printf("Enter the Character:");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}