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

    int se;
    printf("\nEnter element to search:");
    scanf("%d", &se);

    int count = 0;

    for(i=0; i<n; i++)
    {
        if(arr[i] == se)
        {
            count++;
            break;
        }
    }

    if(count == 0)
    {
        printf("Element is not found");
    }
    else
    {
        printf("\n%d element is existed in %d position", se, i);
    }
}
//---------------------------------------------------------------------------------------------------------------
