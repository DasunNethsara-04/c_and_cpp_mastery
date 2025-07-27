#include <stdio.h>
#include <string.h>

int main(void)
{
    char text1[20] = "Hello";
    char text2[10] = ", World";

    // loop through source string
    int i = 0;
    unsigned int len1 = strlen(text1);
    unsigned int len2 = strlen(text2);

    for (int i = 0; i < len2; i++)
    {
        text1[len1 + i] = text2[i];
    }

    printf("%s\n", text1);
    printf("Length of text1: %d", strlen(text1));

    return 0;
}