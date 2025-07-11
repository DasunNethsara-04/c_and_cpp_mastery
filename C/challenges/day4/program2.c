// Exercise 2 : Factorial Using Function
// Write a function to return the factorial of a number.

// int factorial(int n);

#include <stdio.h>

// prototype
int factorial(int n);

int main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int fct = factorial(n);
    printf("Factorial of %d is %d\n", n, fct);

    return 0;
}

int factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}