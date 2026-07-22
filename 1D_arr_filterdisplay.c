#include<stdio.h>

void main()
{
    int arr[100], n, i;

    printf("Enter how many values do you want to insert:");
    scanf("%d", &n);

    printf("Enter %d array elements:", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Given %d array elements:", n);
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nEven numbers are.....\n");

    for(i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d\t", arr[i]);
        }
    }
}