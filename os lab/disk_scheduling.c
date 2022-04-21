#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fcfs(int blocks[], int length, int start)
{
    int head = abs(start - blocks[0]);
    printf("Sequence of Blocks: ");
    for (int i = 0; i < length - 1; i++)
    {
        printf("%d -> ", blocks[i]);
        head += abs(blocks[i+1] - blocks[i]);
    }
    printf("%d", blocks[length-1]);
    printf("\nTotal head movements = %d cylinders", head);

}

void sstf(int blocks[], int length, int start)
{
    int location,x, y, head = 0;
    for (int i = 0; i < length; i++)
    {
        int pointer = abs(start - blocks[0]);
        for (int j = 0; j < length; j++)
        {   
            x = abs(start - blocks[j]);
            if (x <= pointer)
            {
                y = blocks[j];
                pointer = x;
                location = j;
            }
        }
        printf("%d ", y);
        start = y;
        head += pointer;
        blocks[location] = 100000;
    }
    printf("\nTotal head movements = %d cylinders", head);
}

int main()
{
    int start, length;
    printf("Enter the block you are presently at: ");
    scanf("%d", &start);

    printf("Enter the number of blocks to travel to: ");
    scanf("%d", &length);
    int blocks[length];
    printf("Enter the sequence of blocks: ");
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &blocks[i]);
    }
    while (1)
    {
        int choice;
        printf("\n\nEnter your choice:\n1.FCFS\n2.SSTF\n-> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            fcfs(blocks, length, start);
            break;
        
        case 2:
            sstf(blocks, length, start);
            break;

        default:
            exit(1);
            break;
        }
         
    }
    
}