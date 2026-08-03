#include<stdio.h>

void accept(int arr[20],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void display(int arr[20],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void accept_2(int *p,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
}

void display_2(int *p,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(p+i));
    }
}

void main()
{
    int arr[20];
    int *p=&arr[0];
    int n;

    printf("enter a value in n : \n" );
    scanf("%d",&n);

    printf("Enter %d no of values : \n",n);
    accept(arr,n);

    printf("Given values are : ");
    display(arr,n);

    printf("\nEnter %d no of values : \n",n);
    accept_2(p,n);

    printf("Given values are : ");
    display_2(p,n);

}
