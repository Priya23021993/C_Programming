/* Write a program which displays ASCII table.Table contains Symbol,
   Decimal,Hexadecimal and Octal representattion of every nmember
   form o to 255
*/0

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("Decimal\tHexadecimal\tOctal\tCharacter\n");
    printf("........................................\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t%x\t%o\t%c\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{

    DisplayASCII();

    return 0;
}
