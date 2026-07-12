
// no    105
// temp  100

// 12       35      45      89      90      99
// 100      200     300     400     500     600

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

// Node gets inserted in the increasing order
void InsertSortedIncUnique(PPNODE first, int no)
{
    PNODE newn = NULL, temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*first == NULL) || (no < (*first) -> data))
    {
            newn->next = *first;
            *first = newn;    
    }
    else    
    {
        temp = *first;  

        while((temp -> next != NULL) && (temp->next->data < no))
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void Display(PNODE first)
{   
    while(first)
    {
        printf("| %d | -> ",first->data);
        first = first -> next;
    }
    printf("NULL \n");
}

int main()
{
    PNODE head = NULL;

    InsertSortedIncUnique(&head, 11);
    InsertSortedIncUnique(&head, 7);
    InsertSortedIncUnique(&head, 21);
    InsertSortedIncUnique(&head, 51);
    InsertSortedIncUnique(&head, 40);
    InsertSortedIncUnique(&head, 31);
    InsertSortedIncUnique(&head, 51);
    InsertSortedIncUnique(&head, 75);
    
    Display(head);
    
    return 0;
}