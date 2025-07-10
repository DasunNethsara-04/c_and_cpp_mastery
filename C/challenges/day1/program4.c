// Exercise 3: Check if two numbers fall in the same 10’s range (e.g., 21 and 29 → 20s)

#include <stdio.h>

void main(void)
{
    int number1, number2;

    printf("Enter Number 1: ");
    scanf("%d", &number1);
    printf("Enter Number 2: ");
    scanf("%d", &number2);

    int tensRange1 = (number1 / 10) * 10;
    int tensRange2 = (number2 / 10) * 10;

    if (tensRange1 != tensRange2)
    {
        printf("Not in same range\n");
    }
    else
    {
        printf("%ds\n", tensRange1);
    }
}