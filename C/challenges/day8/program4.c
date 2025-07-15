// Find the Longest Word
// Input: "I love embedded systems"
// Output: Longest word = embedded

#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    char *word;

    // get user input
    printf("Enter Text: ");
    fgets(text, sizeof(text), stdin);

    char *token = strtok(text, " ");

    int length = 0;
    while (token != NULL)
    {
        if (strlen(token) >= length)
        {
            length = strlen(token);
            word = token;
        }
        token = strtok(NULL, " ");
    }

    printf("Longest Word = %s", word);

    return 0;
}