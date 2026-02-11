/* Consider Singly Linear Linked list to solve below problem statements

  print List in Reverse Order
  void Displayreverse(PNODE Head);
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
   int Data;
   struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn -> Data = No;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d | ->",Head -> Data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

void DisplayReverse(PNODE Head)
{
    if(Head != NULL)
    {
        DisplayReverse(Head -> next);
        printf(" | %d | ->", Head -> Data);
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,51);
    InsertFirst(&First,11);
    InsertFirst(&First,28);
    InsertFirst(&First,17);
    InsertFirst(&First,101);

    printf("Linked List is :\n");
    Display(First);

    printf("\nReverse Display : \n");
    DisplayReverse(First);
    printf("NULL\n");
    
    return 0;
}
