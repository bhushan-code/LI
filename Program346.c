#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE head, PNODE tail)
{
   

}

int Count(PNODE head, PNODE tail)
{}

void InsertFirst(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    
    if((*head  == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
    (*tail)->next = *head;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{

    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    
    if((*head  == NULL) && (*tail == NULL))
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        *tail->next = newn;
        *tail = newn;
    }
    (*tail)->next = *head;
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos)
{}

void DeleteFirst(PPNODE head, PPNODE tail)
{}

void DeleteLast(PPNODE head, PPNODE tail)
{}

void DeleteAtPos(PPNODE head, PPNODE tail, int ipos)
{}



int main()
{

    PNODE first = NULL;
    PNODE last = NULL;
    int iRet = 0;

    Display(first,last);
    iRet = Count(first,last);
    printf("Number of element is LL : %d", iRet);

    InsertFirst(&first, &last, 51);
    InsertFirst(&first, &last, 21);
    InsertFirst(&first, &last, 11);



    return 0;
}