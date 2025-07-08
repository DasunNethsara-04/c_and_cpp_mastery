#include <stdio.h>

int main()
{
    int a = 10;
    int b = 7;

    printf("%d\n", a + b); // -> 17
    printf("%d\n", a - b); // -> 3
    printf("%d\n", a * b); // -> 70
    printf("%d\n", a / b); // -> 1 (because we just printed that value using %d. It is the format specifire for integers. So, whatever the output, it is only display the integer part only)
    printf("%d\n", a % b); // -> 3
}