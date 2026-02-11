/* Consider Singly Linear Linked list to solve below problem statements

  Replace Negative Numbers with Zero
  modify list negative values become 0
  void ReplaceNegative(PPNODE Head)
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

void ReplaceNegative(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if(temp -> Data <0)
        {
            temp -> Data = 0;
        }
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

     ReplaceNegative(&First);
     printf("After replacing negative numbers with zero :\n ");
     Display(First);
    
    return 0;
}