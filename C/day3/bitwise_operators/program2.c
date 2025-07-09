#include <stdio.h>

int main()
{
    int a = 10;

    // LEFT SHIFT
    int exp1 = a << 2;
    //        00001010
    //        00101000
    //        32 + 8 = 40

    int exp2 = a << 4;
    //        00001010
    //        10100000
    //        160

    printf("%d\n", exp1);
    printf("%d\n\n", exp2);

    // RIGHT SHIFT
    int exp3 = a >> 2;
    //        00001010
    //        00000010
    //        2

    int exp4 = a >> 4;
    //        00001010
    //        00000000
    //        0

    printf("%d\n", exp3);
    printf("%d\n", exp4);

    a = 5;

    // LOGICAL NOT (1's COMPLIMENT)
    int exp5 = ~a;
    //        0101
    //        1010
    //       -------

    // ACTUALLY: ~5 = -(5+1) = -6
    printf("%d\n", exp5);

    return 0;
}