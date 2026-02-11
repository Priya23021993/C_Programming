/* Consider Singly Linear Linked list to solve below problem statements

  First Occurrence position .
  Return position of first occurrence
  int FirstOccur(PNODE Head, int No)
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

int FirstOccur(PNODE Head, int No)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(Head -> Data == No)
        {
            return iPos;
        }
        Head = Head -> next;
        iPos++;
    }
    return -1;
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

    iRet = FirstOccur(First, 21);
    printf("First Occurrence of 21 at Position : %d\n",iRet);
    
    return 0;
}