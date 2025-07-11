// Exercise 4: Print a Pattern Using Function
// Move the triangle/star pattern into a function and call it from main().

// int factorial(int n);

#include <stdio.h>

// prototype
void printRightTriangle(int rows);

int main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    printRightTriangle(n);
    return 0;
}

void printRightTriangle(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}