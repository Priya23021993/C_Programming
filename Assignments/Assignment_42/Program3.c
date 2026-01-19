/* Write a program which to return addition of all element
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

   int Addition(PNODE Head)
   {
      int iSum = 0;

      while(Head != NULL)
      {
         iSum = iSum + Head -> Data;
         Head = Head -> Next;
      }
      return iSum;
   }
   
  
int main()
{
   PNODE First = NULL;
   int iRet = 0;

   InsertFirst(&First,40);
   InsertFirst(&First,30);
   InsertFirst(&First,20);
   InsertFirst(&First,10);

   printf("Linked List is :\n");
   Display(First);

   iRet = Addition(First);
   printf("Addition of all elements : %d\n",iRet);

   return 0;
}

