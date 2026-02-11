/* Consider Singly Linear Linked list to solve below problem statements

  Sum of Digits of each Node
  void SumDigits(PNODE Head);
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

void SumDigits(PNODE Head)
{
    int temp = 0, iSum = 0;

    while(Head != NULL)
    {
        temp = Head -> Data;
        iSum =0;

        while(temp != 0)
        {
            iSum = iSum +(temp % 10);
            temp = temp / 10;
        }
        printf("Sum of Digits of %d : %d\n",Head -> Data,iSum);
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

    printf("\nSum of Digits : \n");
    SumDigits(First);
    
    return 0;
}