#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    // BITWISE AND OPERATIONS
    int exp1 = a & b;
    //         1010 & 0101
    //         0000
    //         0

    // BIWISE OR OPERATIONS
    int exp2 = a | b;
    //        1010 | 0101
    //        1111
    //        15

    // BITWISE XOR OPERATIONS
    int exp3 = a ^ b;
    //        1010 ^ 0101
    //        1111
    //        15

    printf("%d\n", exp1);   // -> 0
    printf("%d\n", exp2);   // -> 15
    printf("%d\n\n", exp3); // -> 15

    a = 10, b = 6;

    int exp4 = a & b;
    //        1010 & 0110
    //        0010
    //        2
    printf("%d\n", exp4); // -> 2

    int exp5 = a | b;
    //        1010 | 0110
    //        1110
    //        14
    printf("%d\n", exp5); // -> 14

    int exp6 = a ^ b;
    //        1010 | 0110
    //        1100
    //        12
    printf("%d\n", exp6); // -> 13

    int exp7 = a & b && b + 1 || 0;
    //         a & b && 7 || 0
    //         2 && 7 || 0
    //         1 || 0
    //         1
    printf("%d\n", exp7); // -> 1
}