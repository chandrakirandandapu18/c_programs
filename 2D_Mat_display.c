// Matrix a
// 1 2 3
// 4 5 6

// Transpose matrix at
// Transpose
// 1  4
// 2  5 
// 3  6
#include<stdio.h>
void main()
{
    int a[20][20],r,c;
    void accept(int[20][20],int ,int);
    void display(int[20][20],int,int);
    printf("Enter no of rows and cols:");
    scanf("%d%d",&r,&c);
    printf("Enter %d array elements in matrix a:",r*c);
    accept(a,r,c);
    printf("\nGiven %d array elements in matrix a:\n",r*c);
    display(a,r,c);
    
}
void accept(int x[20][20],int m,int n)
    {
     int i,j;
         for (i=0;i<m;i++)
            {
            for(j=0;j<n;j++)
            {
            scanf("%d",&x[i][j]);
            }
        }
    }
void display(int x[20][20],int m,int n)
{
 int i,j;
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
    printf("%d\t",x[i][j]);
    }
    printf("\n");
    }
}