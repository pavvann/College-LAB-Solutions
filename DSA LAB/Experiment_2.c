#include <stdio.h>
#include <stdlib.h>

//struct student using dynamic memory allocation

struct subject
{
    char name[30];
    char code[30];
};

int main()
{
    int n;
    printf("enter the number of subjects: ");
    scanf("%d", &n);
    struct subject *ptr;
    ptr = (struct subject *)malloc(n * sizeof(struct subject));
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the details of subject %d: \n", i+1);
        printf("Enter name of Subject: ");
        scanf(" %[^\n]s", (ptr+i)->name);
        printf("Enter Code of Subject: ");
        scanf("%s", (ptr+i)->code);
    }

    printf("\n-----------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nThe details of Subject %d are: \n", i+1);
        printf("Name: %s\n", (ptr+i)->name);
        printf("Code: %s\n", (ptr+i)->code);
    }

    printf("\n");
    return 0;
}


//struct student using normal arrays
/*
struct subject
{
    char name[30];
    char code[30];
    int marks;
};

int main()
{
    int n;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    struct subject sid[n];
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the details of Subject %d\n", i+1);
        printf("Enter name of Subject: ");
        scanf(" %[^\n]s", sid[i].name);
        printf("Enter Code of Subject: ");
        scanf("%s", sid[i].code);
        printf("Enter Marks of Subject: ");
        scanf("%d", &sid[i].marks);

    }
    printf("\n-----------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nThe details of Subject %d are: \n", i+1);
        printf("Name: %s\n", sid[i].name);
        printf("Code: %s\n", sid[i].code);
        printf("Marks: %d\n", sid[i].marks);
    }
    printf("\n");
    return 0;
}*/


