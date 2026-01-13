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

BOOL CheckPrime(int no)
{
    int i = 0;

    if (no < 2)
        return FALSE;

    for (i = 2; i <= no / 2; i++)
    {
        if (no % i == 0)
        {
            return FALSE;
        }
    }
    return TRUE;
}

int DisplayPrime(PNODE Head)
{
    int count = 0;

    printf("Prime numbers in the linked list are: ");

    while (Head != NULL)
    {
        if (CheckPrime(Head->Data) == TRUE)
        {
            printf("%d ", Head->Data);
            count++;
        }
        Head = Head->Next;
    }
    printf("\n");

    return count;
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
    InsertFirst(&First, 51);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    
    printf("Linked List: ");
    Display(First);
    
    iRet = DisplayPrime(First);
    printf("Total prime numbers: %d\n", iRet);

    
    return 0;
}