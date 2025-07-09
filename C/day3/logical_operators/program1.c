#include <stdio.h>

int main()
{
    int a = 10, b = 5;
    int result;

    // LOGICAL AND OPERATOR
    int exp1 = a == b && b < a;
    // 0  and 1
    // 0

    int exp2 = a > b && b != 10 && b < 11 && a > 5;
    //  1   and   1   and  1   and  1
    // 1

    // LOGICAL OR OPERATOR
    int exp3 = a > b || b == 4;
    // 1 or 0
    // 1

    // LOGICAL NOT OPERATOR
    int exp4 = !5;
    int exp5 = !0;

    int exp6 = 4 && !0;
    // 4 && 1
    // 1
    int exp7 = 4 && 0;
    // 0

    int exp8 = (a > b) && a++;
    // 1 and 10
    // 1

    int exp9 = (a > b) || a++;
    //  1 || 11
    // 1

    printf("Exp 1: %d\n", exp1);   // -> 0
    printf("Exp 2: %d\n\n", exp2); // -> 1

    printf("Exp 3: %d\n\n", exp3); // -> 1

    printf("Exp 4: %d\n", exp4);   // -> 0
    printf("Exp 5: %d\n\n", exp5); // -> 1

    printf("Exp 6: %d\n", exp6);   // -> 1
    printf("Exp 7: %d\n\n", exp7); // -> 0

    printf("Exp 8: %d\n", exp8);   // -> 1
    printf("Exp 9: %d\n\n", exp9); // -> 1

    a = 1;
    b = 6;

    // a = -1
    // b = 8

    int exp10 = a-- && ++b;
    //  1 and 7
    // 1
    int exp11 = --a && ++b;
    //  -1 and 8
    // 1

    printf("Exp 10: %d\n", exp10);   // -> 1
    printf("Exp 11: %d\n\n", exp11); // -> 1
}