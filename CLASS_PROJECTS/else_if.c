#include <stdio.h>

void positiveCheck()
{
    int n;

    printf("\n--- Positive Number Check ---\n");
    printf("Enter number: ");
    scanf("%d", &n);

    if(n > 0)
    {
        printf("Positive Number\n");
    }
}

void evenOdd()
{
    int n;

    printf("\n--- Even Odd Check ---\n");
    printf("Enter number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

void gradeCheck()
{
    int marks;

    printf("\n--- Grade Calculator ---\n");
    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 90)
    {
        printf("Grade A\n");
    }
    else if(marks >= 75)
    {
        printf("Grade B\n");
    }
    else if(marks >= 50)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    positiveCheck();
    evenOdd();
    gradeCheck();

    return 0;
}