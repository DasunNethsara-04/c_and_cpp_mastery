// Exercise 1 : Sum of Array Elements
// Take n elements into an array and print their sum.
// Input : 5 → 2 4 6 8 10
// Output : 30

#include <stdio.h>

int getSum(int arr[], int len);

int main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter value for %d index: ", i);
        scanf("%d", &numbers[i]);
    }

    int total = getSum(numbers, n);
    printf("Sum: %d\n", total);

    return 0;
}

int getSum(int arr[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return sum;
}