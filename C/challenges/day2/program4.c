// Exercise 4 : Reverse a number
// Input : 1234 → Output : 4321

#include <stdio.h>

void main(void)
{
    int n, rev = 0;
    printf("Enter Number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    printf("Reversed: %d", rev);
}