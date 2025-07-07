#include <stdio.h>

#define MAX 100

int a = 10;
int sum(int num1, int num2);

int main()
{
    int n1 = 10;
    int n2 = 20;
    int total = sum(n1, n2);

    printf("Total is %d\n", total);
}

int sum(int num1, int num2)
{
    return num1 + num2;
}