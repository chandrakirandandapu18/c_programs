#include<stdio.h>
#include<stdlib.h>
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
int insert(int arr[20],int n,int pos,int in)
{
    int i,temp,tempo ;
    printf("Enter the element you want to insert :");
    scanf("%d",&in);
    if(pos==n)
    {
        printf("pos=n so inserted successfully........");
        arr[pos]=in;
    }
    else if(pos>0 && pos<n)
    {
        for(i=pos;i<n;i++)
        {
            temp=arr[i];
            arr[i]=in;
            in=temp;
        }
        n++;
        return n;

    }
    else if(pos<0)
    {
        printf("invalid position....");
    }
      printf("\nInserted succesfully....");
    
}



void main()
{
    int arr[20],n,in,pos;
    back:

    printf("Enter no of values do you want to insert:");
    scanf("%d",&n);
    if(n>20)
    {
        goto back;
    }
    printf("Enter %d array elements\n",n);
    accept(arr,n);

    printf("Given %d array elements:\n",n);
    display(arr,n);

    printf("\nEnter in which position you want to insert");
    scanf("%d",&pos);
    n=insert(arr,n,pos,in);
    printf("elemts after inserting is :");
    display(arr,n);
}
