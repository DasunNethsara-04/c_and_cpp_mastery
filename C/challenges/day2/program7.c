// Exercise 7: Pattern - Number Triangle
// Inpuy: 4
// Output
/*
1
1 2
1 2 3
1 2 3 4
 */

#include <stdio.h>

void main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}