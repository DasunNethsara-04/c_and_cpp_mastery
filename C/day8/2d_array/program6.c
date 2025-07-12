#include <stdio.h>

int main()
{
    int row1, col1, row2, col2, sum;

    // get the size of the first matrix
    printf("Enter the no. of rows in first matrix: ");
    scanf("%d", &row1);
    printf("Enter the no. of columns in first matrix: ");
    scanf("%d", &col1);

    // get the size of the second matrix
    printf("Enter the no. of rows in second matrix: ");
    scanf("%d", &row2);
    printf("Enter the no. of columns in second matrix: ");
    scanf("%d", &col2);

    // check if those matrixes are valid or not
    if (col1 != row2)
    {
        printf("Those matrixes can't be multiply!\n");
        return 1;
    }

    // initialize the matrixes
    int matrix1[row1][col1];
    int matrix2[row2][col2];

    // result matrix
    int matrix3[row1][col2];

    printf("\n");
    // get values for the first matrix
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("Enter value for %d, %d index in first matrix: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\n");

    // get values for the second matrix
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("Enter value for %d, %d index in second matrix: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // calculation area
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            sum = 0;
            // use a 3rd loop for multiplication
            for (int k = 0; k < col1; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            matrix3[i][j] = sum;
        }
    }

    printf("\nFirst Matrix: \n");
    // display the first matrix
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix\n");
    // display the first matrix
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("\nThird Matrix\n");
    // display the first matrix
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
}