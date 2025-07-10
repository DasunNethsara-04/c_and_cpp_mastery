// Exercise 2 : Sum of first N natural numbers
// Use a loop and store the sum
// Input : 5 → Output : 15

#include <stdio.h>

void main(void)
{
    int n, total = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        total += i;
    }
    printf("Total is: %d\n", total);
}