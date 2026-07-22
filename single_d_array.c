#include <stdio.h>

int main()
{
    // Single dimensional array declaration
    int arr[10], i, n;

    printf("Enter how many values do you want to insert (below 10): ");
    scanf("%d", &n);

    // Check if the input size is valid
    if (n > 10 || n <= 0)
    {
        printf("Invalid input! Please enter a number between 1 and 10.\n");
        return 0;
    }

    printf("Enter %d integer values:\n", n);

    // Read array elements
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Given %d integer values are:\n", n);

    // Display array elements
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");
return 0;
}