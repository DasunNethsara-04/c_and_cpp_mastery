// Exercise 2: Multiple of both 3 and 5

#include <stdio.h>

void main(void)
{
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0)
    {
        printf("%d is Multiple of both 3 and 5\n", number);
    }
    else
    {
        printf("%d is not Multiple of both 3 and 5\n", number);
    }
}