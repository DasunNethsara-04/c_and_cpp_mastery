// Exercise 3 : Factorial of a number
// Input : 5 → Output : 120
// !5 = 5 x 4 x 3 x 2 x 1 = 120

#include <stdio.h>

void main(void)
{
    int n, factorial = 1;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d is: %d\n", n, factorial);
}