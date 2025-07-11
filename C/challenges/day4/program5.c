// Exercise 5: Prime Check Function
// Write a function that returns 1 if the number is prime, otherwise 0.

// int isPrime(int n);

#include <stdio.h>

// prototype
int isPrime(int n);

int main(void)
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}