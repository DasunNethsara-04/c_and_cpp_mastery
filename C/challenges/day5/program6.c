// Bonus 1: Second Largest Element
// Find the second largest number in the array.

#include <stdio.h>
#include <limits.h>

int findSecondLargestNumber(int arr[], int len);

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

    int result = findSecondLargestNumber(numbers, n);
    printf("\nSecond Largest number is: %d\n", result);
}

int findSecondLargestNumber(int arr[], int len)
{
    int largest = INT_MIN, largest2nd = INT_MIN;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == largest)
            continue;
        if (arr[i] > largest2nd)
            largest2nd = arr[i];
    }
    return largest2nd;
}