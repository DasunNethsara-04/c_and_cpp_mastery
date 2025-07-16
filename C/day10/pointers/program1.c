#include <stdio.h>

int main()
{
    int number = 12;

    int *ptr = &number;

    printf("%u", ptr);

    return 0;
}