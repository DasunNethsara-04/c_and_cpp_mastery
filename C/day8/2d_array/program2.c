#include <stdio.h>

int main(void)
{
    int firstMatrix[2][3];

    // get inputs for the firstMatrix
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("Enter row value for %d,%d: ", row, col);
            scanf("%d", &firstMatrix[row][col]);
        }
    }

    printf("\nFirst Array before transpose: \n");
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", firstMatrix[row][col]);
        }
        printf("\n");
    }

    printf("\n");

    // transpose the first matrix and display it
    printf("\nFirst Array after transpose: \n");
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("%d ", firstMatrix[col][row]);
        }
        printf("\n");
    }
}