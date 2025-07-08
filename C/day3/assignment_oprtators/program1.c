#include <stdio.h>

int main()
{
    int a = 1;

    a += 2;            // a = a + 2
    printf("%d\n", a); // -> 3

    a -= 1;            // a = a - 1
    printf("%d\n", a); // -> 2

    a *= 5;            // a = a * 5
    printf("%d\n", a); // -> 10

    a /= 2;            // a = a / 2
    printf("%d\n", a); // -> 5

    a %= 2;            // a = a % 2
    printf("%d\n", a); // -> 1
}