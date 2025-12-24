/* Accept number of rows and Number of Columns from user and display below Pattern.
   
  Input : iRow = 3       iCol = 4

  Output :  *   #   *   #
            *   #   *   #
            *   #   *   #
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j= 0;

  for(i = 1; i <= iRow; i++)
  {
    for(j= 1; j <= iCol; j++)
    {
      if((j % 2)==1)
      {
        printf("*\t");
      }
      else
      {
        printf("#\t");
      }
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 =0, iValue2 = 0;

  printf("Enetr number of Rows and Columns:");
  scanf("%d%d",&iValue1,&iValue2);

  Pattern(iValue1,iValue2);

  return 0;
}