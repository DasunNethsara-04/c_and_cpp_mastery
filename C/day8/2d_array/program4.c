#include <stdio.h>

int main(void)
{
    int matrix1[3][3];
    int matrix2[3][3];

    // get user inputs
    // for the first matrix
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("Enter row value for %d,%d in the first matrix: ", row, col);
            scanf("%d", &matrix1[row][col]);
        }
    }
    printf("\n");
    // for the first matrix
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("Enter row value for %d,%d in the second matrix: ", row, col);
            scanf("%d", &matrix2[row][col]);
        }
    }

    // calculate the sum of those two matrixes and display the output
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", matrix1[row][col] + matrix2[row][col]);
        }
        printf("\n");
    }
}