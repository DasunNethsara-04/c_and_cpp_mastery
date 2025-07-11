// Pattern 2: Right Triangle of Stars
// Input: 4
// Output:
/*
 *
 * *
 * * *
 * * * *
 */

#include <stdio.h>

void main(void)
{
    int n;
    printf("N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}