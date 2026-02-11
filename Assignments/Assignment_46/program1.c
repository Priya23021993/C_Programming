/* Consider Singly Linear Linked list to solve below problem statements

  Display Elements greater than X
  print elements greater than X
  void DisplayGreater(PNODE Head, int X)
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

void DisplayGreater(PNODE Head, int X)
{
    printf("Elements greater than %d :", X);

    while(Head != NULL)
    {
        if(Head -> Data > X)
        {
            printf("%d",Head -> Data);
        }
        Head = Head -> next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,40);
    InsertFirst(&First,30);

    printf("Linked List is :\n");
    Display(First);

    DisplayGreater(First,15);
    
    return 0;
}
