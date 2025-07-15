// Factorial using recursion

#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int number;
    printf("Enter N: ");
    scanf("%d", &number);

    int fctl = factorial(number);

    printf("Factorial of %d is %d\n", number, fctl);

    return 0;
}