#include<stdio.h>

void accept(int[20][20], int, int);
void display(int[20][20], int, int);
void transpose(int[20][20], int[20][20], int, int);

void main()
{
    int a[20][20], at[20][20], r, c;

    printf("Enter no of rows and cols: ");
    scanf("%d%d", &r, &c);

    printf("Enter %d array elements in matrix a:\n", r * c);
    accept(a, r, c);

    printf("\nGiven %d array elements in matrix a:\n", r * c);
    display(a, r, c);

    printf("\nAfter transpose:\n");
    transpose(a, at, c, r);

    printf("\nTranspose matrix:\n");
    display(at, c, r);
}

void transpose(int x[20][20], int xt[20][20], int m, int n)
{
    int i, j;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            xt[i][j] = x[j][i];
        }
    }
}

void accept(int x[20][20], int m, int n)
{
    int i, j;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
}

void display(int x[20][20], int m, int n)
{
    int i, j;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
}