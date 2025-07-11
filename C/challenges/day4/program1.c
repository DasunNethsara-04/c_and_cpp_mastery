// Exercise 1: Sum of First N Numbers
// Write a function that takes n as input and returns the sum from 1 to n.
// int sumToN(int n);

#include <stdio.h>

// prototype
int sumToN(int n);

int main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int total = sumToN(n);
    printf("Sum is %d\n", total);

    return 0;
}

int sumToN(int n)
{
    int total = 0;
    for (int i = 0; i <= n; i++)
    {
        total += i;
    }
    return total;
}