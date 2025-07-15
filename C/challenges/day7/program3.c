// Exercise 3: Reverse a String
// Reverse a string using a loop.
// Input:  Tiger
// Output : regiT

#include <stdio.h>
#include <string.h>

int main()
{
    char text[50];
    char temp;

    printf("Enter Text: ");
    scanf("%s", text);

    printf("\nBefore Reverse: %s\n", text);
    unsigned int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        if (i == (len / 2))
            break;
        temp = text[i];
        text[i] = text[len - 1 - i];
        text[len - 1 - i] = temp;
    }

    printf("After Reverse: %s\n", text);

    return 0;
}