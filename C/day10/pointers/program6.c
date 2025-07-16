#include <stdio.h>

int main()
{
    int a[] = {2, 4, 6, 8, 10};

    int *p = &a[0];
    int *q = &a[3];

    printf("%d\n", *q);

    int d = q - p;
    printf("%d\n", d);

    q = q - 2;
    printf("%d\n", *q);

    d = p - q;

    printf("%d\n", d);
}