#include <stdio.h>

int main()
{
    int a = 10, b = 5;

    int *p, *q;

    p = &a;
    q = &b;

    *q = *p;

    printf("%d %d %d\n", a, *p, *q);

    return 0;
}