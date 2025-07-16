#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    int *p = &a;
    int *q = &b;

    printf("value of a: %d\n", a);
    printf("value of a (from pointer): %d\n", *p);

    printf("address of a: %x\n", &a);
    printf("address of a (from pointer): %x\n", p);

    printf("address of p: %x\n", p);
    printf("address of p: %x\n\n", &p);

    *p = 20;
    printf("value of a: %d\n", a);
    printf("value of a (from pointer): %d\n", *p);
}