#include <stdio.h>

int main()
{

    int a = 5;

    int *ptr1 = NULL;

    // You can't de-reference a null pointer
    // printf("%d\n", *ptr1);

    if (ptr1 == NULL)
        printf("This is a null pointer\n");
    else
        printf("%d\n", *ptr1);

    int *ptr2 = NULL;

    if (ptr1 == ptr2)
        printf("Same Pointers\n");
    else
        printf("Not same\n");

    return 0;
}