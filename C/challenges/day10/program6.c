// Pointer to Pointer Demo
// Input : Use int **pp
// Output : Print value using **pp

#include <stdio.h>

int main()
{
    int a = 45;
    int *p = &a;
    int **pp = &p;

    printf("Value of a: %d\n", **pp);
    return 0;
}