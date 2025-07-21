#include <stdio.h>

int main(void) {
    int *ptr;   // this is a wild pointer.

    printf("%d", *ptr); // random garbage value will be printed

    int *ptr2 = NULL;
}