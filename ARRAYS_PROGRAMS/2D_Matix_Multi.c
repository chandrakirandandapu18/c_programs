#include<stdio.h>

void accept(int[20][20], int, int);
void display(int[20][20], int, int);
void mul_matrix(int[20][20], int[20][20], int[20][20], int, int, int);

void main()
{
    int a[20][20], b[20][20], mul[20][20];
    int m, n, p, q;

back:
    printf("Enter no of rows and cols in matrix A:\n");
    scanf("%d%d", &m, &n);

    printf("Enter no of rows and cols in matrix B:\n");
    scanf("%d%d", &p, &q);

    if(n != p)
    {
        printf("Multiplication is not possible\n");
        printf("First matrix column size must be equal to second matrix row size\n");
        goto back;
    }

    printf("Enter %d array elements in matrix A:\n", m * n);
    accept(a, m, n);

    printf("Enter %d array elements in matrix B:\n", p * q);
    accept(b, p, q);

    printf("\nGiven %d array elements in matrix A:\n", m * n);
    display(a, m, n);

    printf("\nGiven %d array elements in matrix B:\n", p * q);
    display(b, p, q);

    mul_matrix(a, b, mul, m, n, q);

    printf("\nMultiplication matrix:\n");
    display(mul, m, q);
}

void mul_matrix(int a[20][20], int b[20][20], int mul[20][20], int m, int n, int q)
{
    int i, j, k;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < q; j++)
        {
            mul[i][j] = 0;

            for(k = 0; k < n; k++)
            {
                mul[i][j] = mul[i][j] + (a[i][k] * b[k][j]);
            }
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