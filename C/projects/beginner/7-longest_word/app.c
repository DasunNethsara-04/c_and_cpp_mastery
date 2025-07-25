//
// Project 7 - Find the Longest Word in a Sentence
// Created by Dasun Nethsara on 7/25/25.
//

#include <string.h>
#include <stdio.h>

int main()
{
    char string[150];
    char *word = NULL;

    unsigned int len = 0;

    // get the user input
    printf("Enter Text: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, '\n')] = '\0';

    char *token = strtok(string, " ");

    while (token != NULL)
    {
        if (strlen(token) > len)
        {
            word = token;
            len = strlen(token);
        }
        token = strtok(NULL, " ");
    }

    printf("Longest Word: %s\n", word);

    return 0;
}