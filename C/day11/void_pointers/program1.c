#include <stdio.h>

int main()
{
    int a = 5;
    float b = 3.142;
    char c = 'A';

    void *ptr;

    // to display int data
    ptr = &a;
    printf("%d\n", *(int *)ptr);

    // to display float data
    ptr = &b;
    printf("%f\n", *(float *)ptr);

    // to display char data
    ptr = &c;
    printf("%c\n", *(char *)ptr);
}