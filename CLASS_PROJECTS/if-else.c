#include <stdio.h>

void positiveCheck()
{
    int n;

    printf("\n--- Positive Number Check ---\n");
    printf("Enter a number: ");
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
    printf("Enter a number: ");
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

void votingEligibility()
{
    int age;

    printf("\n--- Voting Eligibility ---\n");
    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Eligible to Vote\n");
    }
    else
    {
        printf("Not Eligible to Vote\n");
    }
}

int main()
{
    positiveCheck();
    evenOdd();
    votingEligibility();

    return 0;
}