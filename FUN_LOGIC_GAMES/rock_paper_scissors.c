#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main()
{
    int player, computer;
    int user_score = 0, computer_score = 0;
    char player_pick[10] = "";
    char computer_pick[10] = "";
    char again;

    char choice[][10] = {"rock", "paper", "scissors"};

    srand(time(NULL));

    while(1)
    {
        printf("\n========================\n");
        printf("   ROCK PAPER SCISSORS\n");
        printf("========================\n");

        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");

        printf("Select a number from above: ");
        scanf("%d", &player);

        if(player == 1)
        {
            strcpy(player_pick, "rock");
        }
        else if(player == 2)
        {
            strcpy(player_pick, "paper");
        }
        else if(player == 3)
        {
            strcpy(player_pick, "scissors");
        }
        else
        {
            printf("Invalid choice...\n");
            continue;
        }

        computer = rand() % 3 + 1;

        if(computer == 1)
        {
            strcpy(computer_pick, "rock");
        }
        else if(computer == 2)
        {
            strcpy(computer_pick, "paper");
        }
        else
        {
            strcpy(computer_pick, "scissors");
        }


        printf("\nYou chose      : %s\n", player_pick);
        printf("Computer chose : %s\n\n", computer_pick);


        if(strcmp(computer_pick, "rock") == 0 && strcmp(player_pick, "scissors") == 0)
        {
            printf("Computer won!\n");
            computer_score++;
        }
        else if(strcmp(computer_pick, "paper") == 0 && strcmp(player_pick, "rock") == 0)
        {
            printf("Computer won!\n");
            computer_score++;
        }
        else if(strcmp(computer_pick, "scissors") == 0 && strcmp(player_pick, "paper") == 0)
        {
            printf("Computer won!\n");
            computer_score++;
        }
        else if(strcmp(player_pick, computer_pick) == 0)
        {
            printf("Both chose the same option!\n");
        }
        else
        {
            printf("Player won!\n");
            user_score++;
        }


        printf("\nScore:\n");
        printf("Player   : %d\n", user_score);
        printf("Computer : %d\n", computer_score);


        printf("\nPlay again? (y/n): ");
        scanf(" %c", &again);

        if(again == 'n' || again == 'N')
        {
            break;
        }
    }

    printf("\nFinal Score:\n");
    printf("Player   : %d\n", user_score);
    printf("Computer : %d\n", computer_score);

    printf("Game Over!");

    return 0;
}