#include <stdio.h>

int main()
{
    int a = 5, b, c, d;

    b = ++a; // a = a + 1;   -> a = 6
             // b = a;       -> b = 6
             // b -> 6

    c = a++; // c = a        -> c = 6
             // a = a + 1;   -> a + 1 = 7
             // c -> 6

    d = ++a; // a = a + 1    -> a + 1 = 8
             // d = a        -> d = 8
             // d -> 8

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
}