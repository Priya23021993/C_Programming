/* Consider Singly Linear Linked list to solve below problem statements

  Display Only Odd Elements.
  print only Odd Elements.
  void DisplayOdd(PNODE Head)
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

void DisplayOdd(PNODE Head)
{
    printf("Odd Elements are :");
    
    while(Head != NULL)
    {
        if((Head -> Data % 2)!= 0)
        {
            printf("%d",Head -> Data);
        }
        Head = Head -> next;
    }
    printf(" \n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,40);
    InsertFirst(&First,30);

    printf("Linked List is :\n");
    Display(First);

    DisplayOdd(First);
    
    return 0;
}
