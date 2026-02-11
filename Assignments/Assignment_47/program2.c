/* Consider Singly Linear Linked list to solve below problem statements

  Count Digits of each Node
  Example : 123 -> 3 digits
  void CountDigits(PNODE Head);
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

void CountDigits(PNODE Head)
{
    int temp = 0, iCnt = 0;

    while(Head != NULL)
    {
        temp = Head -> Data;
        iCnt = 0;

    if(temp == 0)
    {
        iCnt = 1;
    }
    while(temp != 0)
    {
        iCnt++;
        temp = temp / 10;
    }
    printf("Digits in %d : %d\n",Head -> Data,iCnt);
    Head = Head -> next;
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

    printf("\nCount Digits : \n");
    CountDigits(First);
    
    return 0;
}