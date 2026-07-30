#include <stdio.h>

int main()
{
    int choice, level;

    printf("Choose Your Class\n");
    printf("1. Warrior\n");
    printf("2. Mage\n");
    printf("3. Archer\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter your level: ");
    scanf("%d", &level);

    switch (choice)
    {
        case 1:
            printf("Class: Warrior\n");
            if (level >= 10)
                printf("Skill Unlocked: Berserk Slash");
            else
                printf("Keep training to unlock skills.");
            break;

        case 2:
            printf("Class: Mage\n");
            if (level >= 10)
                printf("Skill Unlocked: Fire Storm");
            else
                printf("Keep training to unlock skills.");
            break;

        case 3:
            printf("Class: Archer\n");
            if (level >= 10)
                printf("Skill Unlocked: Rain of Arrows");
            else
                printf("Keep training to unlock skills.");
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}