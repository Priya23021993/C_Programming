/* Consider Singly Linear Linked List to Solve Below 
   Problem Statements.

   4.Count Elements Divisible by 5.
    int CountDivByFive(PNODE Head)

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

int CountDivByFive(PNODE Head)
{
    int iCount = 0;
    while(Head != NULL)
    {
        if((Head->Data %5)== 0)
        {
            iCount++;
        }
        Head = Head->next;
    }
    return iCount;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InserLast(&First,11);
    InserLast(&First,20);
    InserLast(&First,33);
    InserLast(&First,40);
    InserLast(&First,55);

    printf("Linked List :\n");
    Display(First);

    iRet=CountDivByFive(First);
    printf("Count of Elements divisible by 5:%d\n",iRet);

    return 0;

}