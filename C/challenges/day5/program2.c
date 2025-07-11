// Exercise 2: Find Maximum Element
// From the given array, find and print the largest number.
// Input: 5 → 2 10 3 8 1
// Output : 10

#include <stdio.h>

int findMax(int arr[], int n);

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

    int max = findMax(numbers, n);
    printf("Maximum Number: %d\n", max);

    return 0;
}

int findMax(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        else
            continue;
    }
    return max;
}