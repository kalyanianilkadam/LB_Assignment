#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->Next = NULL;
    newn->Data = no;
    
    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

int AdditionEven(PNODE Head)
{
    int sum = 0;

    while (Head != NULL)
    {
        if ((Head->Data % 2) == 0)
        {
            sum = sum + Head->Data;
        }
        Head = Head->Next;
    }
    return sum;
}


void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("| %d |-> ", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    
    InsertFirst(&First, 101);
    InsertFirst(&First, 50);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);
    
    printf("Linked List: ");
    Display(First);
    
    iRet= AdditionEven(First);
    printf("addition of even numbers are:%d", iRet);
    
    return 0;
}