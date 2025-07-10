// Exercise 4 : Reverse a number
// Input : 1234 → Output : 4321

#include <stdio.h>

void main(void)
{
    int n, rev;
    printf("Enter N: ");
    scanf("%d", &n);

    while (n != 0)
    {
        int digit = n % 10;
        rev = n * 10 + digit;
        n = n / 10;
    }
}