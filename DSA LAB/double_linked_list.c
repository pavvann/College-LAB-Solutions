#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};

void atend(struct node *header, int ndata)
{
    struct node *ptr, *neww;
    ptr = header;
    neww = (struct node *)malloc(sizeof(struct node));
    while(ptr->next!=NULL)
    {
        ptr = ptr -> next;
    }
    ptr -> next = neww;
    neww -> data = ndata;
    neww -> next = NULL;
    neww -> prev = ptr;
}


int main()
{
    struct node *header, *ptr, *new;

    int n;
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);


    header = (struct node *)malloc(sizeof(struct node));

    header -> data = NULL;
    header -> prev = NULL;
    header -> next = NULL;

    ptr = header;
    
    for (int i = 2; i <= n; i++)
    {
        new = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new->data);
        new->prev = ptr;
        ptr->next = new;
        new->next = NULL;
        ptr = ptr->next;
    }
    ptr = header;
    printf("The data in the linked list is: ");
    while (ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n\nEnter the value you want to add at the end: ");
    int ndata;
    scanf("%d", &ndata);    
    atend(header, ndata);
    ptr = header;
    printf("\n\nThe data in the new linked list is: ");
    while (ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    printf("\n\nUsing reverse transversal: ");
    ptr = header;
    while (ptr->next!=NULL)
    {
        ptr = ptr -> next;
    }
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ", ptr -> data);
        ptr = ptr -> prev;
    }
    printf("\n");
    return 0;
}