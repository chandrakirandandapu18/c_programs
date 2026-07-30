#include <stdio.h>

int main()
{
    int fuel, oxygen, engine;

    printf("Enter Fuel Percentage: ");
    scanf("%d", &fuel);

    printf("Enter Oxygen Percentage: ");
    scanf("%d", &oxygen);

    printf("Engine Working? (1-Yes 0-No): ");
    scanf("%d", &engine);

    if (fuel >= 70)
    {
        if (oxygen >= 80)
        {
            if (engine == 1)
            {
                printf("Mission Launch Successful!");
            }
            else
            {
                printf("Engine Failure!");
            }
        }
        else
        {
            printf("Oxygen Level Too Low!");
        }
    }
    else
    {
        printf("Not Enough Fuel!");
    }

    return 0;
}