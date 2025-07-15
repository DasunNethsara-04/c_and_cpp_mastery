#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[12] = "Hello World";
    char temp;
    unsigned int len = strlen(text);
    printf("%s\n", text);
    for (int i = 0; i < len; i++)
    {
        if (i == (len / 2))
            break;
        temp = text[i];
        // printf("%c %c", temp, text[len-1-i]);
        text[i] = text[len - 1 - i];
        text[len - 1 - i] = temp;
    }

    printf("%s\n", text);

    return 0;
}