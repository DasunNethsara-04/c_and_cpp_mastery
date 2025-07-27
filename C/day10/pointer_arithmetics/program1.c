#include <stdio.h>

int main()
{
    int a[] = {2, 4, 6, 8, 10};

    int *p = &a[0];
    int *q = &a[3];

    printf("%d\n", *q);

    p++;
    printf("%d\n", *p);

    p = p + 3;
    printf("%d\n", *p);
}