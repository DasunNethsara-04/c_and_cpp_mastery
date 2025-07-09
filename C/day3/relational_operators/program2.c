#include <stdio.h>

int main()
{
    int a = 18, b = 9, c, d, e = 10, f;

    // a = 18
    // b = 10
    // c = 9
    // d = 10
    // e = 10
    // f = 1

    c = b++; // c = b;
             // b = b + 1
             // c -> 9
    d = b;   // -> 10
    f = a > b > d < c;

    int output = a + c == b >= e < c + d != 1;
    // 17 == b >= e < 19 != 1
    // 17 == 0 != 1
    // 0 != 1
    // 1

    printf("a: %d\n", a);   // -> 18
    printf("b: %d\n", b);   // -> 10
    printf("c: %d\n", c);   // -> 9
    printf("d: %d\n", d);   // -> 10
    printf("e: %d\n", e);   // -> 10
    printf("f: %d\n\n", f); // -> 1

    printf("output: %d", output); // -> 1
}