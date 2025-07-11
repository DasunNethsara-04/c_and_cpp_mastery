#include <stdio.h>

int main(void)
{
    int a[2][3];
    int sum;
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("Enter row value for %d,%d: ", row, col);
            scanf("%d", &a[row][col]);
        }
    }
    printf("\n");
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            sum += a[row][col];
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }

    printf("Sum of the 2D array: %d\n", sum);
}