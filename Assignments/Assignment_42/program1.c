/* Write a program which search first occurrence of particular
   elements from singly linear linked list.
   Function should retrun position at which element is found.
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

   int SearchFirstOcc(PNODE Head, int no)
   {
      int iPos = 1;

      while(Head != NULL)
      {
         if(Head -> Data == no)
         {
            return iPos;
         }
         Head = Head -> Next;
         iPos++;
      }
      return -1; 
   }
   
  
int main()
{
   PNODE First = NULL;
   int iRet = 0;

   InsertFirst(&First,70);
   InsertFirst(&First,30);
   InsertFirst(&First,50);
   InsertFirst(&First,40);
   InsertFirst(&First,30);
   InsertFirst(&First,20);
   InsertFirst(&First,10);

   printf("Linked List is :\n");
   Display(First);

   iRet = SearchFirstOcc(First,30);
   printf("First Occurence of 30 at position : %d\n",iRet);

   return 0;
}
