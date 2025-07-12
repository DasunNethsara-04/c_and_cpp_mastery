// Exercise 2: Transpose a Matrix
// Swap rows with columns.
// If original is :
/*
1 2 3
4 5 6
*/

// Output:
/*
1 4
2 5
3 6
*/

#include <stdio.h>

int main()
{
    int row = 0, col = 0;
    printf("Enter No. of Rows: ");
    scanf("%d", &row);
    printf("Enter No. of Columns: ");
    scanf("%d", &col);

    int numbers[row][col];

    // get inputs for the matrix
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value for %d,%d index: ", i, j);
            scanf("%d", &numbers[i][j]);
        }
    }

    printf("\nBefore Transpose: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    // transpose the matrix
    printf("\nAfter Transpose: \n");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", numbers[j][i]);
        }
        printf("\n");
    }
}