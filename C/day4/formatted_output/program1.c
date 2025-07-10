#include <stdio.h>

int main()
{
    int a = 10, b = 5;
    int sum = a + b;

    printf("a: %d\nb: %d\n", a, b);
    printf("sum: %d\n", sum);

    // for floats
    float number = 123.456789;
    printf("%f\n", number);

    // limit the decimals
    printf("%5.2f\n", number);

    return 0;
}