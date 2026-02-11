/* Consider Singly Linear Linked list to solve below problem statements

  Last Occurrence position .
  Return position of last occurrence
  int LastOccur(PNODE Head, int No)
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

int LastOccur(PNODE Head, int No)
{
    int iPos = 1, iLast = -1;

    while(Head != NULL)
    {
        if(Head -> Data == No)
        {
            iLast = iPos;
        }
        Head = Head -> next;
        iPos++;
    }
    return iLast;
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

    iRet = LastOccur(First, 21);
    printf("Last Occurrence of 21 at Position : %d\n",iRet);
    
    return 0;
}