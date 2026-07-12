
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
        
        // Data : 11

        // 100      
        //| 11 | -> 

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

        if((temp -> next == NULL) && (temp -> data == no))
        {
            free(newn);
            return;
        }

        if(temp -> next != NULL)
        {
            if((temp -> data == no) || (temp -> next -> data == no))  // Duplicate
            {
                free(newn);
                return;
            }
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

int MiddleElement(PNODE first)
{
    int iCount = 1, Middle = 0;

    PNODE temp = first;

    if(first == NULL)
    {
        return -1;
    }
    
    while(temp)
    {
        temp = temp -> next;
        iCount++;
    }

    Middle = iCount / 2;

    printf("Middle index is : %d\n",Middle);

    for(iCount = 1; iCount < Middle; iCount++)
    {
        first = first -> next;
    }
    
    return (first -> data);
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertSortedIncUnique(&head, 11);

    Display(head);
    
    iRet = MiddleElement(head);

    printf("Middle element is : %d\n",iRet);

    return 0;
}