/* Consider Singly Linear Linked list to solve below problem statements

  check whether list is Empty
  Return true if list is empty
  bool IsEmpty(PNODE Head)
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

bool IsEmpty(PNODE Head)
{
    if(Head == NULL)
    {
        return true;
    }
    else
    {
       return false;
    }
}

int main()
{
    PNODE First = NULL;
    bool bRet = false;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,40);
    InsertFirst(&First,30);

    printf("Linked List is :\n");
    Display(First);

    bRet= IsEmpty(First);
    if(bRet ==true)
    {
        printf("Linked list is Empty\n");
    }
    else
    {
        printf("Linked list is not Empty\n");
    }
    
    return 0;
}