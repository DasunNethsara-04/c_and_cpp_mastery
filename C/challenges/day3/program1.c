// Pattern 1: Solid Rectangle
// Input: rows = 3, cols = 5
// Output:
/*
 * * * * *
 * * * * *
 * * * * *
 */

#include <stdio.h>

void main(void)
{
    int rows, cols;
    printf("Rows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}