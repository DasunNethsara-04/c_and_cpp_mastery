// Exercise 3: Reverse a Number with Return
// Write a function that takes an integer and returns its reverse.

// int factorial(int n);

#include <stdio.h>

// prototype
int reverseNumber(int n);

int main(void)
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int reversed = reverseNumber(n);
    printf("Reverse of %d is %d\n", n, reversed);
}

int reverseNumber(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}