/* Consider Singly Linear Linked list to solve below problem statements

  Count Odd Numbers
  Count node Containing odd values
  int CountOdd(PNODE Head)
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

int CountOdd(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        if((Head -> Data % 2)!= 0)
        {
            iCnt++;
        }
        Head = Head -> next;
    }
    return iCnt;
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

    iRet = CountOdd(First);
    printf("Count of odd elements :%d\n", iRet);
    
    return 0;
}