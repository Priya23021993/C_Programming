/* Consider Singly Linear Linked list to solve below problem statements

  Increment Each Node Value by 1
  Increase each element by 1.
  void IncrementAll(PPNODE Head)
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

void IncrementAll(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
       temp -> Data = temp -> Data + 1;
       temp = temp -> next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,10);
    InsertFirst(&First,-20);
    InsertFirst(&First,30);
    InsertFirst(&First,-40);
    InsertFirst(&First,50);

    printf("Linked List is :\n");
    Display(First);

     IncrementAll(&First);
     printf("After incrementing each element by 1 :\n ");
     Display(First);
    
    return 0;
}