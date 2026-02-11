/* Consider Singly Linear Linked List to Solve Below 
   Problem Statements.

   2.Check Whether All Elements Are Positive
   bool CheckAllPositive(PNODE Head)

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

bool CheckAllPositive(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->Data <= 0)
        {
            return false;
        }
        Head = Head->next;
    }
    return true;
}

int main()
{
    PNODE First = NULL;
    bool bRet = false;

    InserLast(&First,11);
    InserLast(&First,20);
    InserLast(&First,33);
    InserLast(&First,40);
    InserLast(&First,55);

    printf("Linked List :\n");
    Display(First);

    bRet =CheckAllPositive(First);
    if(bRet == true)
    {
       printf("All elements are positive\n");
    }
    else
    {
        printf("All elements are not Positive\n");
    }

    return 0;

}