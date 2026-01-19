/* Write a program which displays all elements which are 
perfect from singly Linear Linked List.
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define False 0

typedef int BOOL;

struct node
{
   int Data;
   struct node * Next;
};

typedef struct node NODE; 
typedef struct node *PNODE; 
typedef struct node **PPNODE; 

void InsertFirst(PPNODE Head, int no)
{
   PNODE newn = NULL;

   newn = (PNODE)malloc(sizeof(NODE));

   newn -> Data = no;
   newn -> Next= NULL;

   if(*Head == NULL)
   {
      *Head = newn;
   }
   else
   {
      newn -> Next =*Head;
      *Head = newn;
   }

} 

void Display(PNODE Head)
{
   while(Head != NULL)
   {
      printf("| %d | ->",Head -> Data);
      Head = Head -> Next;
   }
   printf("NULL\n");
}

   BOOL IsPerfect(int no)
   {
       int i=0 ,sum = 0;

       for(i=1; i<= no/2;i++)
       {
        if(no % i ==0)
        {
            sum = sum + i;
        }
       }
       return(sum == no);
   }

   int DisplayPerfect(PNODE Head)
   {
      printf("Perfect numbers are: ");

      while(Head != NULL)
      {
        if(IsPerfect(Head -> Data))
        {
            printf("%d",Head -> Data);
        }
        Head = Head -> Next;
      }
      printf("\n");
      return 0;
   }
   
  
int main()
{
   PNODE First = NULL;

   InsertFirst(&First,89);
   InsertFirst(&First,6);
   InsertFirst(&First,41);
   InsertFirst(&First,17);
   InsertFirst(&First,28);
   InsertFirst(&First,10);

   Display(First);

   DisplayPerfect(First);


   return 0;
}
