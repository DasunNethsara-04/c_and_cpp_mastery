//
// Project 4 - Vowels and Consonants counter
// Created by Dasun Nethsara on 7/24/25.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char text[150], c;
    int vowels = 0, consonants = 0;

    // take user input
    printf("Enter Text: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        c = text[i];
        if (isalpha(c))
        {
            if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);

    return 0;
}