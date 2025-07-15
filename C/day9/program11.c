#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char text[12] = "Hello World";

    // implement the strlwr()
    unsigned int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        // you can follow this
        // if (isupper(text[i]))
        // {
        //     text[i] = text[i] + 32;
        // }

        // also this
        if (text[i] >= 65 && text[i] <= 90)
        {
            text[i] = text[i] + 32;
        }
    }

    printf("%s", text);

    return 0;
}