/* Write a program which displays all elements which are 
prime from singly Linear Linked List.
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

   BOOL IsPrime(int no)
   {
       int i=0;

       if(no <= 1)
       {
         return FALSE;
       }
       for(i=2; i<= no/2; i++)
       {
        if(no % i ==0)
        {
            return FALSE;
        }
       }
       return TRUE;
   }

   int DisplayPrime(PNODE Head)
   {
      printf("Prime numbers are: ");

      while(Head != NULL)
      {
        if(IsPrime(Head -> Data))
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
   InsertFirst(&First,22);
   InsertFirst(&First,41);
   InsertFirst(&First,17);
   InsertFirst(&First,20);
   InsertFirst(&First,11);

   Display(First);

   DisplayPrime(First);


   return 0;
}

