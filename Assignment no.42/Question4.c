////////////////////////////////////////////////////////////////////////////
//
//  Required Header Files 
//
///////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : InsertFirst
//  Description :   It is used to Insert First node
//  Input :         Int no
//  Output :        nothing
//  Author :        Kalyani Anil Kadam.
//  Date :          5/1/2026
//
//////////////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Maximum
//  Description :   It is used to display Maximum number
//  Input :         int 
//  Output :        int
//  Author :        Kalyani Anil Kadam.
//  Date :          5/1/2026
//
//////////////////////////////////////////////////////////////////////////////

int Maximum(PNODE Head)
{
    int iMax = Head->Data;

    while (Head != NULL)
    {
        if (Head->Data > iMax)
        {
            iMax = Head->Data;
        }
        Head = Head->Next;
    }
    return iMax;
}

/////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display linked list
//  Input :         int
//  Output :        int
//  Author :        Kalyani Anil Kadam.
//  Date :          5/1/2026
//
//////////////////////////////////////////////////////////////////////////////

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("| %d |-> ", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function For the Application 
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);
    
    printf("Linked List: ");
    Display(First);

    iRet = Maximum(First);
    printf("maximum number is:%d",iRet);
    
  
    
    return 0;
}