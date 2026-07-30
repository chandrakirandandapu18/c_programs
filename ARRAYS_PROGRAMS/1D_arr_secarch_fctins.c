
#include<stdio.h>

void accept(int[],int);
void display(int[],int);
void searching(int[],int,int);

int main()
{
    int arr[20],n,se;

    printf("Enter no of values do you want to insert:");
    scanf("%d",&n);

    printf("Enter %d array elements\n",n);
    accept(arr,n);

    printf("Given %d array elements:\n",n);
    display(arr,n);

    printf("\nEnter element to search:");
    scanf("%d",&se);

    searching(arr,n,se);

    return 0;
}

void searching(int x[20],int m,int se)
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
        printf("Element is not found");
    }
    else
    {
        printf("Element is found at %d position",i);
    }
}

void accept(int x[20],int m)
{
    int i;

    for(i=0;i<m;i++)
    {
        scanf("%d",&x[i]);
    }
}

void display(int x[20],int m)
{
    int i;

    for(i=0;i<m;i++)
    {
        printf("%d\t",x[i]);
    }
}