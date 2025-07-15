// Exercise 2: Manual String Length
// Write a function that finds the length of a string without using strlen().
// Input:  Hello
// Output : Length = 5

#include <stdio.h>

unsigned int strLength(char str[]);

int main(void)
{
    char name[50];

    printf("Enter Text: ");
    scanf("%s", name);

    unsigned int len = strLength(name);

    printf("Length = %d\n", len);
}

unsigned int strLength(char str[])
{
    int i = 0;
    unsigned int length = 0;
    while (str[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}