// Exercise 5: Upper and Lower Triangular Matrix
// For a 3×3 matrix:
// Input
/*
1 2 3
0 5 6
0 0 9
*/

// Output
/*
Upper Triangle
1 2 3
0 5 6
0 0 9

Lower Triangle
1 0 0
4 5 0
7 8 0

*/

#include <stdio.h>

int main()
{
    int n = 0, count = 0;
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

    // loop to print the upper triangle
    printf("\nUpper Triangle: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                printf("%d ", numbers[i][j]);
            }
            else
            {
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
    // loop to print the lower triangle
    printf("\nLower Triangle: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i)
            {

                printf("%d ", numbers[i][j]);
            }
            else
            {
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
}