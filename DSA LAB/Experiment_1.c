#include <stdio.h>

//Find sum of all array elements using recursion.
/*
int sum(int a[], int n)
{ 
    if (n==0)
    {
        return 0;
    } 
    else 
    {
        return a[n-1]+sum(a,n-1);
    }
}

int  main()
{
    int n;
    printf("enter the numer of elements: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Sum = %d\n", sum(a, n));
    return 0;
        
}*/


//insert and delete elements from array
/*
int main()
{
    int a1[100];
    int n;
    printf("enter the number of elements in your array (max 100): ");
    scanf("%d", &n);

    printf("\nenter the elements of the array: \n");
    for (int k = 0; k < n; k++)
    {
        scanf("%d", &a1[k]);
    }

    printf("\nthe array you entered is: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a1[k]);
    }
    
    int x, i;
    printf("\n\nenter the number you want to insert: ");
    scanf("%d", &x);
    printf("enter the position of your new number in the array: ");
    scanf("%d", &i);

    n = n+1;

    for (int k = n - 1; k > i - 1; k--)
    {
        a1[k] = a1[k-1];

    }
    a1[i-1] = x;

    printf("\n\nupdated array: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a1[k]);
    }
    
    int j;
    printf("\n\nenter the position of element you want to delete: ");
    scanf("%d", &j);
    

    for (int k = j-1; k < n; k++)
    {
        a1[k] = a1[k+1];
    }
    n--;

    printf("\n\nupdated array: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a1[k]);
    }
    printf("\n");
    return 0;    
}*/


//Convert uppercase string to lowercase using for loop
/*
int main()
{
    
    char a[100];
    printf("Enter string: ");
    scanf("%[^\n]s", a);

    for (int i = 0; i <100; i++)
    {
        if (a[i]>='A' && a[i]<='Z')
            {
                a[i] = a[i] + 32;
            }
    }

    printf("%s\n", a);
    return 0;   
}*/


//Find the sum of rows and columns of matrix of given order.
/*
int main()
{
    int r,  c;
    printf("enter no. of rows and columns respectively: ");
    scanf("%d %d", &r, &c);

    int mtx[r][c];
    printf("\n\n");

    for (int i = 0; i <  r; i++)
    {
        printf("enter elements of row number %d: ", i+1);

        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mtx[i][j]);
        }
        
    }
    printf("\n\n\n");
    printf("sum of rows: \n\n");

    for (int sr = 0; sr < r; sr++)
    {
        int sumr = 0;
        for (int sc = 0; sc < c; sc++)
        {
            sumr += mtx[sr][sc];
        }
        printf("sum of elements of row number %d = %d", sr+1, sumr);
        printf("\n\n");
        
    }

    printf("\n");
    printf("sum of columns: \n\n");

    for (int sc = 0; sc < c; sc++)
    {
        int sumr = 0;
        for (int sr = 0; sr < r; sr++)
        {
            sumr += mtx[sr][sc];
        }
        printf("sum of elements of column number %d = %d", sc+1, sumr);
        printf("\n\n");
        
    }
    return 0; 
}*/


//Find the product of two matrices using pointers.
/*
int main()
{
    int r1, r2, c1, c2;
    printf("Enter number of rows and columns in matrix 1: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter number of rows and columns in matrix 2: ");
    scanf("%d%d", &r2, &c2);
    int mat1[r1][c1], mat2[r2][c2];

    printf("\nEnter matrix 1:\n\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }    
    }

    printf("\nEnter matrix 2:\n\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }   
    }
    printf("Product of Matrices: \n\n");
    int ele = 0;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < r2; k++)
            {
                ele += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
            }
            printf("%d ", ele);
            ele = 0;
        }
        printf("\n");
    }
    return 0;
}*/


/*Store n numbers (integers or real) in an array. Conduct a linear search for a given number and report success or 
failure in the form of a suitable message  */
/*
int main()
{
    int n;
    printf("enter the number of elements in your array: ");
    scanf("%d", &n);

    float arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
    float srch;
    printf("\nenter the number you want to search: ");
    scanf("%f", &srch);
    int report = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==srch)
        {
            printf("\nthe number %f is at position no. %d (index: %d)\n", srch, i+1, i);
            report = 1;
            break;
        }
        
    }
    if (report == 1)
    {
        printf("\nSearch Successful\n\n");
    }
    else
    {
        printf("\nSearch Unsuccessful: No such number in array\n\n");
    }
    return 0;
}*/