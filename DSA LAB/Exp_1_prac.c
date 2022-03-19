#include <stdio.h>

//sparse matrix
/*
int main()
{
    int m, n;
    printf("enter the order of your matrix: ");
    scanf("%d%d", &m, &n);
    int totz = 0, tot = m*n;
    int mtx[m][n];
    
    printf("enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mtx[i][j]);
            if (mtx[i][j] == 0)
            {
                totz += 1;
            }
        }
        
    }
    if (totz > tot/2)
    {
        printf("\ngiven matrix is a sparse matrix with %d zero elements\n", totz);
    }
    else
    {
        printf("\ngiven matrix is not a sparse matrix\n");
    }
    return 0;
}*/

//largest and smallest number in a given array
/*
int main()
{
    printf("Enter the number of elements in your array: ");
    int n;
    scanf("%d", &n);
    printf("\nEnter the elements of the array: ");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = a[0], max = a[0]; 
    for (int i = 0; i < n; i++)
    {
        if (a[i]< min)
        {
            min = a[i];
        }
        else if (a[i]>max)
        {
            max = a[i];
        } 
    }
    printf("\nGreatest element = %d\tSmallest element = %d\n\n", max, min);

    return 0;
}*/

//the total number of alphabets, digits or special characters in a string.
/*
int main()
{
    char str[10000];
    printf("Enter the string: ");
    scanf("%s", str);
    int alpha = 0, digi = 0, spechar = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            alpha++;
        }
        else if (str[i]>='0' && str[i]<='9')
        {
            digi++;
        }
        else
        {
            spechar++;
        }
    }
    printf("\n\nNumber of alphabets = %d\nNumber of digits = %d\nNumber of special characters = %d\n\n", alpha, digi, spechar);
    return 0;
}*/

//whether the entered string is palindrome or not.
/*
int main()
{
    char str[10000];
    printf("enter your string: ");
    scanf("%s", str);
    int digi = 0;
    for (int i = 0 ; str[i] != '\0' ; i++)
    {
        digi++;   
    }
    int palin=0;
    for (int i = 0; i < digi; i++)
    {
        if (str[i]!=str[digi-(i+1)])
        {
            palin++;
            break;
        }
        
    }
    if (palin == 0)
    {
        printf("\nGiven string is a palindrome\n\n");
    }
    else {
        printf("\nGiven string is not  a palindrome\n\n");
    }    
    return 0;
}*/

//add two complex numbers by passing structure to a function as argument
/*
struct complex
{
    float real;
    float img;
};

void add(struct complex x, struct complex y, struct complex sum)
{
    
    sum.real = x.real + y.real;
    sum.img = x.img + y.img;

    printf("\nSum = %.1f + (%.1fi)\n\n", sum.real, sum.img);
}
int main()
{
    struct complex x, y, sum;
    printf("enter the real and imaginary part of 1st number: ");
    scanf("%f%f", &x.real, &x.img);
    
    printf("enter the real and imaginary part of 2nd number: ");
    scanf("%f%f", &y.real, &y.img);

    add(x,y,sum);
    return 0;
}*/

//Count the number of words in a string
/*
int main()
{
    char str[10000];
    printf("\nEnter your string: ");
    scanf("%[^\n]s", str);
    int count = 1;
    for (int i = 0; str[i] !='\0'; i++)
    {
        if (str[i]==' ')
        {
            count++;
        }
    }
    printf("\nNumber of words in the given string are: %d\n\n", count);
    return 0;   
}*/

//product structure
/*
struct product
{
    char name[20];
    int ppu;
    int qp;
    int amt;
};

int main()
{
    int n;
    printf("enter the number of products: ");
    scanf("%d", &n);

    struct product x[n];

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the name of product number %d: ", i+1);
        scanf("%s", x[i].name);
    }

    for (int j = 0; j < n; j++)
    {
        printf("\n\nenter details for %s\n", x[j].name);
        printf("\nenter price per unit: ");
        scanf("%d", &x[j].ppu);
        printf("enter quantity purchased: ");
        scanf("%d", &x[j].qp);
        x[j].amt = x[j].ppu * x[j].qp;
    }
    printf("\n\n");
    for (int l = 0; l < n; l++)
    {
        printf("price per unit of %s = %d\n", x[l].name, x[l].ppu);
        printf("quantity purchased of %s = %d\n\n", x[l].name, x[l].qp);
        printf("total amount spent on %s = %d\n\n", x[l].name, x[l].amt);
    }
    return 0;
}*/

//student structure
/*
struct dor 
{
    int d;
    int m;
    int y;
}; 

struct student_record
{
    char name[30];
    int sap;
    char eno[30];
    char dob[30];
    struct dor stu;
    
};

int main()
{
    int n;
    printf("enter the number of students: ");
    scanf("%d", &n);

    struct student_record x[n];
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("enter name of student: ");
        scanf("%s", x[i].name);
        printf("enter SAP ID of %s: ", x[i].name);
        scanf("%d", &x[i].sap);
        printf("enter enrollment number of %s: ", x[i].name);
        scanf("%s", x[i].eno);
        printf("enter date of birth of %s (dd/mm/yyyy): ", x[i].name);
        scanf("%s", x[i].dob);
        printf("enter date of registration of %s: \n", x[i].name);
        printf("day: ");
        scanf("%d", &x[i].stu.d);
        printf("month: ");
        scanf("%d", &x[i].stu.m);
        printf("year: ");
        scanf("%d", &x[i].stu.y);
        printf("\n\n");
    }
    for (int j = 0; j < n; j++)
    {
        printf("Details of %s are: \n", x[j].name);
        printf("SAP ID: %d\n", x[j].sap);
        printf("Enrollment Number: %s\n", x[j].eno);
        printf("Date of Birth: %s\n", x[j].dob);
        printf("Date of Registration: %d/%d/%d\n\n\n", x[j].stu.d, x[j].stu.m, x[j].stu.y);

    }
    return 0;
}*/
 