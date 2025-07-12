// Exercise 5: Copy a String (Manual)
// Copy the contents of one string to another without strcpy().
// Input:  Programming
// Output : Copied string : Programming

#include <stdio.h>
#include <string.h>

int main()
{
    char text1[50];
    char text2[50];

    printf("Enter Text: ");
    scanf("%s", text1);

    unsigned int len = strlen(text1);
    for (int i = 0; i <= len; i++)
    {
        text2[i] = text1[i];
    }
    // text2[i] = '\n';

    printf("Original content: %s\n", text1);
    printf("Copied string: %s\n", text2);
}