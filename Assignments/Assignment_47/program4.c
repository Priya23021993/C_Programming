/* Consider Singly Linear Linked list to solve below problem statements

  Display Prime Numbers
  void DisplayPrime(PNODE Head);
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

bool IsPrime(int No)
{ 
    int i= 0;

    if(No <2)
    {
        return false;
    }
    for(i = 2; i <= No/2; i++)
    {
        if(No % i == 0)
        {
            return false;
        }
    }
   return true;
}

void DisplayPrime(PNODE Head)
{
    printf("Prime Numbers are :");

    while(Head != NULL)
    {
        if(IsPrime(Head -> Data))
        {
            printf("%d", Head -> Data);
        }
        Head = Head -> next;
    }
    
   printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,51);
    InsertFirst(&First,11);
    InsertFirst(&First,28);
    InsertFirst(&First,17);
    InsertFirst(&First,101);

    printf("Linked List is :\n");   
    Display(First);

    printf("\n");
    DisplayPrime(First);
    
    return 0;
}