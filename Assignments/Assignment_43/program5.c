/* Write a program which display addition of digits of elements
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

int SumDigit(PNODE Head)
{
   int no =0, iSum = 0, iDigit = 0;

   while(Head != NULL)
   {
      no = Head -> Data;
      iSum = 0;

      while(no != 0)
      {
         iDigit = no % 10;
         iSum = iSum + iDigit;
         no = no /10;
      }
      printf("%d",iSum);
      Head = Head -> Next;
   }
   printf("\n");

}
   
  
int main()
{
   PNODE First = NULL;
   

   InsertFirst(&First,640);
   InsertFirst(&First,240);
   InsertFirst(&First,20);
   InsertFirst(&First,230);
   InsertFirst(&First,110);

   Display(First);

   SumDigit(First);
    return 0;
}

