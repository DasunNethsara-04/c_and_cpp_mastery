// Print Array Elements Using Pointers
// Input: arr[] = {1, 2, 3, 4, 5}
// Output: Each element using pointer notation

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];

    for (int i = 0; i < 5; i++, ptr++)
    {
        printf("%d\n", *ptr);
    }

    return 0;
}