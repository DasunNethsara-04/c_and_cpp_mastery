// Print numbers from n to 1 recursively

#include <stdio.h>

void printNumbers(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    printNumbers(n - 1);
}

int main()
{
    int number;
    printf("Enter N: ");
    scanf("%d", &number);

    printNumbers(number);
    return 0;
}