#include <stdio.h>

/*
 * 0 -> false
 * 1 -> true
 */

int main()
{
    int a = 10;
    int b = 20;
    char c1 = 'A';
    char c2 = 'B';

    printf("%d\n", a > b);    // -> 0
    printf("%d\n", a < b);    // -> 1
    printf("%d\n", a >= b);   // -> 0
    printf("%d\n", a <= b);   // -> 1
    printf("%d\n", a == b);   // -> 0
    printf("%d\n\n", a != b); // -> 1

    printf("%d\n", c1 > c2);  // -> 0
    printf("%d\n", c1 < c2);  // -> 1
    printf("%d\n", c1 >= c2); // -> 0
    printf("%d\n", c1 <= c2); // -> 1
    printf("%d\n", c1 == c2); // -> 0
    printf("%d\n", c1 != c2); // -> 1
}