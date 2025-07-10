// Exercise 6 : Pattern - Right Triangle
// Inpuy: 4
// Output
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
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}