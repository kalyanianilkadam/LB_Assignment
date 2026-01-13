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


int SumDigitsOfNumber(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += (num % 10);
        num = num / 10;
    }
    return sum;
}

void SumOfEachNode(PNODE Head)
{
    while (Head != NULL)
    {
        int sum = SumDigitsOfNumber(Head->Data);
        printf("Sum of digits of %d = %d\n", Head->Data, sum);
        Head = Head->Next;
    }
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
    
    
    printf("\nSum of digits of entire list: %d\n", SumOfDigits(First));
printf("\nSum of digits of each node:\n");
SumOfEachNode(First);

    
    return 0;
}