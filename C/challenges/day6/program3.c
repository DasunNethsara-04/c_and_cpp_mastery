// Exercise 3: Sum of All Elements in a Matrix
// Take a matrix as input and calculate the total sum of all values.

#include <stdio.h>

int main()
{
    int row = 0, col = 0, total = 0;
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

    // calculate the total of the matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            total += numbers[i][j];
        }
    }

    printf("\n Sum is: %d\n", total);
}