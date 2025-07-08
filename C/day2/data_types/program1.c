#include <stdio.h>

int main()
{
    // int
    int a = 10; // signed int
    printf("%d\n", a);
    unsigned int b = 20; // unsinged int
    printf("%u\n", b);
    long int c = 5465415; // long int
    printf("%ld\n", c);
    short int d = 150; // short int
    printf("%hi\n", d);

    // char
    char e = 'A'; // signed char
    printf("%c\n", e);
    unsigned char f = 'z'; // unsigned char
    printf("%c\n", f);

    // float
    float pi = 3.142; // float
    printf("%f\n", pi);

    // double
    double g = 5.451544;
    printf("%lf\n", g);
    long double h = 41.34616448448;
    printf("%Lf\n", h);

    char z = 'z';
    printf("%d", z);
    // printf("%d", z);
}