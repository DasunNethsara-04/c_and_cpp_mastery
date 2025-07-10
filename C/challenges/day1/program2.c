// Exercise 1: Odd or Even — using != and %

#include <stdio.h>

void main(void)
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    if (number % 2 != 0)
    {
        printf("%d is Odd Number!\n", number);
    }
    else
    {
        printf("%d is Even Number!\n", number);
    }
}