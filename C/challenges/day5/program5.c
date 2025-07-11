// Exercise 5: Search in Array
// Take a number from user and check whether it exists in the array.
// Input: 7 → 5 9 3 7 1 0 8, Search: 3
// Output: Found at index 2

#include <stdio.h>

int search(int arr[], int len, int query);

int main(void)
{
    int n, query;
    printf("Enter N: ");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter value for %d index: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("\nSearch: ");
    scanf("%d", &query);

    int index = search(numbers, n, query);
    if (index == -1)
        printf("Search not found!");
    else
        printf("%d found in %d index in the array!\n", query, index);
}

int search(int arr[], int len, int query)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == query)
            return i;
    }
    return -1;
}