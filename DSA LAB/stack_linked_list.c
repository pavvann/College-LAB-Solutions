#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *link;
}*top = NULL, *top1;

void push(int ndata, struct node *ptr)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new -> data = ndata;
    new -> link = top;
    top = new;
    
}

void pop()
{
    top1 = top;
    top = top -> link;
    free(top1);
}

void topdata()
{
    printf("%d", top -> data);
}

void display()
{
    while(top -> data != NULL)
    {
        printf("%d ", top -> data);
        top = top -> link;
    }
}


int main()
{
    struct node *header, *ptr;
    printf("\nThis is stack made with linked list");
    int option, ndata;
    header = (struct node *)malloc(sizeof(struct node));
    header -> data = NULL;
    header -> link = NULL;

    top = header;
    while (1)
    {
        printf("\n\nChoose from below options: \n");
        printf("1. Push\n2. Pop\n3. Print the last element\n4. Print all the elements\n5. Quit\n\nYour Selection: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the data you want to push: ");
            scanf("%d", &ndata);
            push(ndata, ptr);
            break;
        case 2:
            pop();
            break;
        case 3:
            topdata();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("invalid input");
            break;
        }
        
    }
    return 0;
}