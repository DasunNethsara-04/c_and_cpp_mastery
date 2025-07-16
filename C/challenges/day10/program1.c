// Print Address of a Variable
// Input: a = 5
// Output: Address of a

#include <stdio.h>

int main()
{
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    printf("Address of a: %p\n", &number);

    return 0;
}