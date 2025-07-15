#include <stdio.h>
#include <string.h>

int main(void)
{
    char text1[12] = "Hello World";

    // not working in my computer
    strrev(text1);

    printf("%s", text1);

    return 0;
}