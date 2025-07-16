// Sum of Array Elements Using Pointers
// Input: arr[] = {1, 2, 3, 4, 5}
// Output: Total sum using pointer traversal

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];
    int total = 0;

    for (int i = 0; i < 5; i++, ptr++)
    {
        total += *ptr;
    }

    printf("Total: %d\n", total);

    return 0;
}