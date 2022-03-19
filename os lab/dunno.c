#include <stdio.h>

int main()
{
    printf("Enter the memory available: ");
    int mem, n;
    scanf("%d", &mem);
    int block[mem];
    printf("Enter 0 for unoccupied block and 1 for occupied block: \n");
    for (int i = 0; i < mem; i++)
    {
        scanf("%d", &block[i]);
    }
    
    printf("Unoccupied Blocks: \n");
    for (int i = 0; i < mem; i++)
    {
        if (block[i]==0)
        {
            printf("%d ", i);
        }    
    }
    printf("\n\nOccupied Blocks: \n");
    for (int i = 0; i < mem; i++)
    {
        if (block[i]==1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    int np;
    printf("\nEnter number processes that are already working: ");
    scanf("%d", &np);
    int ps[np];

    printf("\n");
    for (int i = 0; i < np; i++)
    {
        printf("Enter the size of process P%d: ", i+1);
        scanf("%d", &ps[i]);
    }
    

}