#include <stdio.h>

void printHello()
{
    printf("Hello World!\n");
}

void showSum(int a, int b)
{
    printf("%d\n", a + b);
}

int mult(int num1, int num2)
{
    return num1 * num2;
}

int main()
{
    printHello();
    showSum(5, 4);
    int val = mult(10, 2);

    printf("Mult value: %d\n", val);

    return 0;
}