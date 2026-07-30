#include<stdio.h>
#include<stdlib.h>

void main()
{
    int arr[20],n,de,i;
    void accept(int[],int);
    void display(int[],int);
    int delete_ele(int[],int,int,int);
    int search(int[],int,int);

back:
    printf("Enter no of elements do you want to insert: ");
    scanf("%d",&n);

    if(n>20)
    {
        printf("array index out of bounds");
        goto back;
    }

    printf("Enter %d array elements:",n);
    accept(arr,n);

    printf("\nGiven %d array elements:",n);
    display(arr,n);

    printf("Enter element to delete:");
    scanf("%d",&de);

    int pos=search(arr,n,de);

    if(pos>=0)
    {
        printf("%d is found at %d position",de,pos);

        if(pos==n-1)
        {
            printf("element is deleted successfullyyyyy.....");
            n--;
        }
        else
        {
            n=delete_ele(arr,n,de,pos);
        }

        printf("\nelements after deleting");
        display(arr,n);
    }
    else
    {
        printf("No such element to delete");
    }
}

int delete_ele(int x[20],int m,int de,int pos)
{
    int i,temp;

    for(i=pos;i<m-1;i++)
    {
        temp=x[i];
        x[i]=x[i+1];
        x[i+1]=temp;
    }

    printf("\nDeleted successfully....");
    m--;
    return m;
}

void accept(int x[20],int m)
{
    for(int i=0;i<m;i++)
    {
        scanf("%d",&x[i]);
    }
}

void display(int x[20],int m)
{
    for(int i=0;i<m;i++)
    {
        printf("%d\t",x[i]);
    }
}

int search(int x[20],int m,int se)
{
    int i,count=0;

    for(i=0;i<m;i++)
    {
        if(x[i]==se)
        {
            count++;
            break;
        }
    }

    if(count==0)
    {
        printf("Element is not found to delete");
        return -1;
    }
    else
    {
        return i;
    }
}