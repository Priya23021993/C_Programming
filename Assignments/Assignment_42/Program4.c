/* Write a program which to return largest element
from singly linear linked list.
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

   int Maximum(PNODE Head)
   {
      int iMax = Head -> Data;

      while(Head != NULL)
      {
         if(Head -> Data > iMax)
         {
            iMax = Head -> Data;
         }
         Head = Head -> Next;
      }
      return iMax;
   }
   
  
int main()
{
   PNODE First = NULL;
   int iRet = 0;

   InsertFirst(&First,240);
   InsertFirst(&First,320);
   InsertFirst(&First,230);
   InsertFirst(&First,110);

   printf("Linked List is :\n");
   Display(First);

   iRet = Maximum(First);
   printf("Maximum element is : %d\n",iRet);

   return 0;
}

