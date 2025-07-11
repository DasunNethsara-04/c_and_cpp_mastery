// Pattern 6: 0-1 Triangle
// Input: 5
// Output:
/*
1
0 1
1 0 1
0 1 0 1
 */
// hint: Print 1 if (row + col) is even, else 0.

#include <stdio.h>

void main(void)
{
    int n;
    printf("N: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if ((row + col) % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}