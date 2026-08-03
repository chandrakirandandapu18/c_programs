#include<stdio.h>

void main()
{
    int n;
    int *p=&n;

    printf("Enter a value in n : \n");
    scanf("%d",&n);

    printf("Address of n : %u\n",&n);
    printf("Value of n : %d\n",n);

    printf("Value of p : %d\n",p);
    printf("Value of *p :%d\n",*p);
}