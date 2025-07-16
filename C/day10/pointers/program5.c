#include <stdio.h>

int main()
{
    int a[5] = {2, 6, 1, 8, 9};

    int *ptr = &a[0];

    printf("%d\n", *ptr);

    ptr = ptr + 2; // ptr = ptr + 2 * size of the data type

    printf("%d\n", *ptr);

    ptr = ptr + 1;

    printf("%d\n", *ptr);
}