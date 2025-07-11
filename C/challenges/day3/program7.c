// Bonus 1: Hollow Rectangle
// Input: rows = 4, cols = 5
// Output:
/*
 * * * * *
 *       *
 *       *
 * * * * *
 */
// Hint: Print * only when i == 1, i == rows, j == 1, or j == cols

#include <stdio.h>

void main(void)
{
    int rows, cols;
    printf("Rows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &cols);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}