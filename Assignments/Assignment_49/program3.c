/* Consider Singly Linear Linked List to Solve Below 
   Problem Statements.

   3.Display Elements Divisible by 3.
   void DisplayDivByThree(PNODE Head)

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

void InserLast(PPNODE Head, int no)
{
    PNODE newn =NULL;
    PNODE temp = NULL;

    newn =(PNODE)malloc(sizeof(NODE));
    newn->Data= no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        temp = *Head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next=newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d | ->", Head->Data);
        Head= Head->next;
    }
    printf("NULL\n");
}

void DisplayDivByThree(PNODE Head)
{
    while(Head != NULL)
    {
        if((Head->Data %3)== 0)
        {
            printf("%d\t",Head->Data);
        }
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;

    InserLast(&First,11);
    InserLast(&First,20);
    InserLast(&First,33);
    InserLast(&First,40);
    InserLast(&First,55);

    printf("Linked List :\n");
    Display(First);

    printf("Elements divisible by 3:\n");
    DisplayDivByThree(First);

    return 0;

}