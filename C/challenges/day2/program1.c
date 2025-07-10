// Exercise 1: Print numbers 1 to N
// Use a for loop
// Input: 10 → Output: 1 2 3 ... 10

#include <stdio.h>

void main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("i: %d\n", i);
    }
}