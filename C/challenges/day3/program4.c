// Pattern 4: Inverted Right Triangle
// Input: 4
// Output:
/*
 * * * *
 * * *
 * *
 *
 */

#include <stdio.h>

void main(void)
{
    int n;
    printf("N: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}