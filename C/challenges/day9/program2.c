// Print numbers from 1 to n recursively

#include <stdio.h>

void printNumbers(int n)
{
    if (n > 0)
    {
        printNumbers(n - 1);
        printf("%d\n", n);
    }
    return;
}

int main()
{
    int number;
    printf("Enter N: ");
    scanf("%d", &number);

    printNumbers(number);
    return 0;
}