// Exercise 3: Reverse the Array (In-place)
// Print the array in reverse order. Don't use a second array.
// Input: 1 2 3 4 5
// Output: 5 4 3 2 1

#include <stdio.h>

int main(void)
{
    int n, temp;
    printf("Enter N: ");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter value for %d index: ", i);
        scanf("%d", &numbers[i]);
    }
    printf("\nBefore Reverse\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // n = 5
        // numbers = [ 1, 2, 3, 4, 5 ]
        // i = 0
        // temp = 1
        // numbers[i] = 5
        // numbers[n - 1 - i] = 5
        // numbers = [ 5, 2, 3, 4, 5 ]
        if (i == (n / 2))
            break;
        temp = numbers[i];
        numbers[i] = numbers[n - 1 - i];
        numbers[n - 1 - i] = temp;
    }

    printf("\nAfter Reverse\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}