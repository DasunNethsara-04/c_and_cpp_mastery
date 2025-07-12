#include <stdio.h>
#include <string.h>

int main(void)
{
    char text1[20] = "Hello";
    char text2[10] = "Hello";

    int val = strcmp(text1, text2);

    if (val == 0)
        printf("Same\n");
    else
        printf("Not Same\n");

    return 0;
}