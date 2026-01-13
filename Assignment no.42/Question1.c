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
//  Function Name : SearchFirstOcc
//  Description :   It is used to display first occurence
//  Input :         int 
//  Output :        int
//  Author :        Kalyani Anil Kadam.
//  Date :          5/1/2026
//
//////////////////////////////////////////////////////////////////////////////

int SearchFirstOcc(PNODE Head, int no)
{
    int pos = 1;
    while (Head != NULL)
    {
        if (Head->Data == no)
        {
            return pos;
        }
        Head = Head->Next;
        pos++;
    }
    return -1;  
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
    int position =0;
    
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    
    printf("Linked List: ");
    Display(First);
    
    position = SearchFirstOcc(First, 21);
    
    if (position != -1)
        printf("Element found at position: %d\n", position);
    else
        printf("Element not found in the list.\n");
    
    return 0;
}