//
// Project 14 - Tic Tac Toe Game
// Created by Dasun Nethsara on 7/28/2025.
//

#define MAX_ROWS 3
#define MAX_COLS 3

#include <stdio.h>

// grid for the tic tac toe
int grid[MAX_ROWS][MAX_COLS] = {0};

// 1 - X
// 2 - 0

void print_grid()
{
    printf("\n");
    for (int i = 0; i < MAX_ROWS; i++)
    {
        for (int j = 0; j < MAX_COLS; j++)
        {
            if (grid[i][j] == 0)
                printf("   ");
            else if (grid[i][j] == 1)
                printf(" X ");
            else
                printf(" 0 ");
            if (j < MAX_COLS - 1)
                printf("|");
        }
        printf("\n");
        if (i < MAX_ROWS - 1)
            printf("---+---+---\n");
    }
    printf("\n");
}

int checkWin(int player)
{
    // Rows and columns
    for (int i = 0; i < 3; i++)
    {
        if ((grid[i][0] == player && grid[i][1] == player && grid[i][2] == player) ||
            (grid[0][i] == player && grid[1][i] == player && grid[2][i] == player))
        {
            return 1;
        }
    }

    // Diagonals
    if ((grid[0][0] == player && grid[1][1] == player && grid[2][2] == player) ||
        (grid[0][2] == player && grid[1][1] == player && grid[2][0] == player))
    {
        return 1;
    }

    return 0;
}

int is_draw()
{
    for (int i = 0; i < MAX_ROWS; i++)
    {
        for (int j = 0; j < MAX_COLS; j++)
        {
            if (grid[i][j] == 0)
                return 0;
        }
    }
    return 1;
}

int main()
{
    int currentPlayer = 1; // 1 = X, 2 = O
    int row, col;
    int winner = 0;

    // Initialize grid
    for (int i = 0; i < MAX_ROWS; i++)
        for (int j = 0; j < MAX_COLS; j++)
            grid[i][j] = 0;

    printf("🎮 Tic-Tac-Toe Game (2 Players)\n");
    print_grid();

    while (1)
    {
        printf("Player %d's turn (Enter row and column [1-3]): ", currentPlayer);
        scanf("%d %d", &row, &col);

        // Convert to 0-indexed
        row--;
        col--;

        // Validate move
        if (row < 0 || row >= MAX_ROWS || col < 0 || col >= MAX_COLS || grid[row][col] != 0)
        {
            printf("Invalid move. Try again.\n");
            continue;
        }

        // Make move
        grid[row][col] = currentPlayer;

        print_grid();

        if (checkWin(currentPlayer))
        {
            printf("Player %d wins!\n", currentPlayer);
            break;
        }

        if (is_draw())
        {
            printf("It's a draw!\n");
            break;
        }

        // Switch player
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    return 0;
}