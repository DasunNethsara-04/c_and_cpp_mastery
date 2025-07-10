// Exercise 4: Find the greatest of 3 numbers using only if-else

#include <stdio.h>

void main(void)
{
    int num1, num2, num3, max;

    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    printf("Enter Number 3: ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    if (max < num3)
    {
        max = num3;
    }

    printf("%d is the Maximum value.", max);
}