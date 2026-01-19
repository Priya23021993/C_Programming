/* Write a program which return second Maximum element 
   from singly Linear Linked List.
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

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

int SecMaximum(PNODE Head)
{
   int iMax = 0, iSecMax = 0;

   if(Head == NULL)
   {
      return -1;
   }

   iMax = Head -> Data;
   iSecMax = Head -> Data;

   while(Head != NULL)
   {
      if(Head -> Data > iMax)
      {
         iSecMax = iMax;
         iMax = Head -> Data;
      }
      else if((Head -> Data > iSecMax) && (Head -> Data != iMax))
      {
         iSecMax =  Head ->Data;
      }
      Head = Head -> Next;
   }
   return iSecMax;
}
   
  
int main()
{
   PNODE First = NULL;
   int iRet = 0;

   InsertFirst(&First,240);
   InsertFirst(&First,320);
   InsertFirst(&First,230);
   InsertFirst(&First,110);

   Display(First);

   iRet = SecMaximum(First);
   printf("Second Maximum element is : %d\n",iRet);


   return 0;
}

