
/*   Accept Division of Student from user and depends on the division
     display exam timing.there are 4 division in school as A,B,C,D.
     Exam of division A at 7 AM,B at 8.30 AM,C at 9.20 AM, D at 10.30 AM.
     (Application should be case S\insensitive).

    Input : C
    Output :Your exam at 9.20 AM

    Input : d
    Output : Your exam at 10.30 AM

*/
#include<stdio.h>

void DisplaySchedule(char chDiv)
{
   if((chDiv >= 'a' && chDiv <= 'z'))
   {
       chDiv = chDiv - 32;
   }

   switch(chDiv)
   {
      case 'A' :
           printf("Your exam at 7.00 AM \n");
            break;

      case 'B' :
           printf("Your exam at 8.30 AM \n");
            break;

      case 'C' :
           printf("Your exam at 9.20 AM \n");
            break;

      case 'D' :
           printf("Your exam at 10.30 AM \n");
            break;

      default :
           printf("Invalid Division \n");
            break;
   }

}

int main()
{
    char cValue = '\0';
    
    printf("Enter the Character :");
    scanf("%c",&cValue);
 
    DisplaySchedule(cValue);

    return 0;
}