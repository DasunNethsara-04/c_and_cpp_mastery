#include <stdio.h>

int main(void)
{
    char text1[12] = "Hello World";
    char text2[15];

    fgets(text2, sizeof(text2), stdin);

    printf("%s", text2);

    return 0;
}