/* Consider Singly Linear Linked list to solve below problem statements

  Search an Element 
  check whether a number is present
  bool search(PNODE Head, int No)
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

bool Search(PNODE Head , int No)
{
    while(Head != NULL)
    {
        if(Head -> Data == No)
        {
            return true;
        }
        Head = Head -> next;
    }
    return false;
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

    bRet = Search(First,21);
    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not Present\n");
    }
    return 0;
}
