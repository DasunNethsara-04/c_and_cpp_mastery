// Sum of digits (e.g., 123 → 6)

#include <stdio.h>

int getSum(int n)
{
    if (n == 0)
        return 0;
    return n % 10 + getSum(n / 10);
}

int main()
{
    int number;
    printf("Enter N: ");
    scanf("%d", &number);

    int sum = getSum(number);

    printf("Sum is: %d\n", sum);

    return 0;
}