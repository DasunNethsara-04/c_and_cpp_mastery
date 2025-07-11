// Bonus Challenge: Fibonacci Sequence Generator
// Write a function that prints the first n terms of the Fibonacci sequence.

// void printFibonacci(int n);
// Output: 0 1 1 2 3 5 8 …

#include <stdio.h>

// prototype
void printFibonacci(int n);

int main(void)
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    printFibonacci(n);
    return 0;
}

void printFibonacci(int n)
{
    int n1 = 0, n2 = 1;

    if (n == 1)
        printf("%d", n1);
    if (n >= 2)
        printf("%d %d ", n1, n2);

    for (int i = 3; i <= n; i++)
    {
        int nextVal = n1 + n2;
        printf("%d ", nextVal);
        n1 = n2;
        n2 = nextVal;
    }
    printf("\n");
}