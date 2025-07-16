// Swap Two Numbers Using Pointers
// Input: a = 10, b = 20
// Output: a = 20, b = 10 (Use function with pointers)

#include <stdio.h>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num1, num2;

    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);

    printf("Before Swap-> a: %d, b: %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After Swap-> a: %d, b: %d\n", num1, num2);

    return 0;
}