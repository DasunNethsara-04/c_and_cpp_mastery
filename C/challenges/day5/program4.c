// Exercise 4: Count Even and Odd Numbers
// Print how many numbers are even and how many are odd.
// Input: 6 → 1 2 3 4 5 6
// Output: Even = 3, Odd = 3

#include <stdio.h>

int main(void)
{
    int n, evens = 0, odds = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter value for %d index: ", i);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] % 2 == 0)
            evens++;
        else
            odds++;
    }
    printf("\nEven Number Count: %d", evens);
    printf("Odd Number Count: %d\n", odds);
}