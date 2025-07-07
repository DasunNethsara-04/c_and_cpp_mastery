#include <stdio.h>

// defining constants using #define
#define PI 3.14
#define MAXVAL 100

int main()
{
    // define constants using const
    const int NUMBER = 50;

    printf("Value of PI: %f\n", PI);
    printf("Maximum Value is: %d\n", MAXVAL);

    printf("Number: %d\n", NUMBER);
    return 0;
}