#include <stdio.h>
#include <string.h>

int main(void)
{
    char text1[20] = "Hello";
    char text2[10] = ", World";

    strcat(text1, text2);

    printf("%s", text1);

    return 0;
}