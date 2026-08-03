#include<stdio.h>
void main()
{
    int a,b;
    void sample(int,int);
    void main_sample(int *,int*);
    printf("Enter any two integers : ");
    scanf("%d%d",&a,&b);

    sample(a,b);

    printf("%d\n",a);
    printf("%d\n",b);

    main_sample(&a,&b);
}

void sample(int x,int y)
{
    printf("Function initiated ....\n");
}

void main_sample(int* x,int* y)
{
    int* temp;
    printf("%d\n",x);
    printf("%d\n",y);

    printf("%d\n",*x);
    printf("%d\n",*y);

    temp=x;
    x=y;
    y=temp;

    printf("after swapping :%d\n",x);
    printf("after swapping :%d\n",y);

    printf("after swapping :%d\n",*x);
    printf("after swapping :%d\n",*y);
}
