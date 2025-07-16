// Access Value Using Pointer
// Input: int a = 5; int *p = &a;
// Output: Value at address p (use *p)

#include <stdio.h>

int main()
{
    int number;
    int *ptr = &number;

    printf("Enter Number: ");
    scanf("%d", &number);

    printf("Value of number: %d\n", *ptr);

    return 0;
}