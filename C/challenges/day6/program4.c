// Exercise 4: Diagonal Sum (Only for Square Matrices)
// For a 3×3 matrix:
// Input
/*
1 2 3
4 5 6
7 8 9
*/
// Output
/*
Left diagonal: 1 + 5 + 9 = 15
Right diagonal: 3 + 5 + 7 = 15
*/

#include <stdio.h>

int main()
{
    int n = 0, total = 0;
    int leftDiag = 0, rightDiag = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    int numbers[n][n];

    // get inputs for the matrix
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter value for %d,%d index: ", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }

    printf("\nMatrix Architechure: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    // calculate the totals of left diagonal
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                leftDiag += numbers[i][j];
        }
    }
    // calculate the totals of right diagonal
    for (int i = 0; i < n; i++)
    {

        rightDiag += numbers[i][n - 1 - i];
    }

    printf("\nTotal of Left diagonal: %d\n", leftDiag);
    printf("Total of Right diagonal: %d\n", rightDiag);
}