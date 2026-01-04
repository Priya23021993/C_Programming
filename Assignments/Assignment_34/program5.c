/* Accept Character from user and display its ASCII Value in Decimal,
   Octal and hexadecimal Format.
   
    Input : A
    Output : Decimal      65
             Octal        0101
             Hexadecimal  0X41
             
*/ 

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal         :%d\n",ch);
    printf("Octal           :%o\n",ch);
    printf("Hexadecimal     :oX%X\n",ch);

}

int main()
{ 
    char cValue = '\0';
    
    printf("Enter the Character:");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}