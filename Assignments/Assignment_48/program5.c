/* Consider Singly Linear Linked list to solve below problem statements

Display Elements at Odd Positions
void DisplayOddPosition(PNODE Head);
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

void DisplayOddPosition(PNODE Head)
{
    int pos = 1;

    while(Head != NULL)
    {
        if(pos % 2 != 0)
        {
            printf("%d\t",Head->Data);
        }
        Head = Head-> next;
        pos++;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First,11);
    InsertFirst(&First,20);
    InsertFirst(&First,33);
    InsertFirst(&First,40);
    InsertFirst(&First,55);

    printf("Linked List is :\n");
    Display(First);

   printf("Elements at Odd Position:\n");
    DisplayOddPosition(First);
    
    return 0;

}
 