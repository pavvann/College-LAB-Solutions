#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main()
{
    printf("A");
    int pid = fork();
    if(pid ==0)
    {
        printf("B");
        int pid1 = fork();
        if(pid == 0)
        {
            printf("C");
            int pid2 = fork();
            printf("D");
        }
        else
            printf("D");
            int pid2 = fork();
            printf("C");
            if (pid==0)
            {
                printf("D");
                printf("D");
            }
    }
    else
    {
        if(pid ==0)
        {
            printf("B");
            int pid3 = fork();
            printf("C");
            if(pid ==0)
            {
                printf("D");
                printf("D");
            }
        }
        else
        {
            printf("C");
            int pid4 = fork();
            printf("D");
        }
    }
}




/*
int main()
{
    int pid = fork();
    if (pid == 0)
    {
        printf("child\n");
    }
    else    
        printf("parent\n");    
    return 0;
}*/


/*
int main ()
{
    printf("A");
    fork();
    printf("B");
    fork();
    printf("C");
    fork();
    printf("D");
    return 0;
}*/