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

int SecondMaximum(PNODE Head)
{
    int max1, max2;

    if (Head == NULL || Head->Next == NULL)
    {
        return -1;   
    }


    max1 = max2 = Head->Data;
    Head = Head->Next;

    while (Head != NULL)
    {
        if (Head->Data > max1)
        {
            max2 = max1;
            max1 = Head->Data;
        }
        else if (Head->Data > max2 && Head->Data != max1)
        {
            max2 = Head->Data;
        }
        Head = Head->Next;
    }

    if (max1 == max2)
    {
        return -1;   
    }

    return max2;
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
    
    iRet = SecondMaximum(First);
    if (iRet != -1)
        printf("Second maximum number is: %d\n", iRet);
    else
        printf("Second maximum number not found\n");
    
    return 0;
}