// Exercise 5 : Pattern - Solid Square
// Input : 3
// Output :
/*
***
***
***
*/

#include <stdio.h>

void main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}