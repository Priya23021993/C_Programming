/* Accept number of rows and number of columns from user and display below Pattern.
   
  Input :   iRow =  3      iCol=  5

  Output : A   A   A    A   A  
           B   B   B    B   B
           C   C   C    C   C
          
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0, j= 0;
    char ch = 'A';

    for(i=0; i< iRow; i++,ch++)
    {
        for(j=0; j < iCol;j++)
        {
          printf("%c\t",ch);
        }
         printf("\n");
    }
       
}

int main()
{
    int iValue1 = 0, iValue2 =0;

    printf("Enter Number of Rows and Coluumns:");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}