//
// Project 1 - Number Guessing Game
// Created by Dasun Nethsara on 7/23/25.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int generate_random_number(const int range)
{
    return rand() % range;
}

void play_game(const int range)
{
    int tries = 0;
    int input;
    const int randomNum = generate_random_number(range);

    // get user input
    while (1)
    {
        tries++;
        printf("Enter Your Guess: ");
        if (scanf("%d", &input) != 1)
        {
            printf("Invalid Input. Please enter a number.\n");
            while (getchar() != '\n')
                continue;
        }

        if (input == randomNum)
        {
            printf("You Won!\n");
            printf("Tries: %d\n", tries);
            break;
        }

        if (input > randomNum)
        {
            printf("Your guess is greater than the actual number!\n");
        }
        else if (input < randomNum)
        {
            printf("Your guess is less than the actual number!\n");
        }
    }
}

int main(void)
{
    srand(time(NULL));

    int difficulty = 0;

    printf("Choose Difficulty (\n\t1 - Easy\n\t2 - Medium\n\t3 - Hard): ");
    scanf("%d", &difficulty);

    switch (difficulty)
    {
    case 1:
        play_game(100);
        break;
    case 2:
        play_game(1000);
        break;
    case 3:
        play_game(10000);
        break;
    default:
        printf("Invalid Argument!\n");
        break;
    }

    return 0;
}
