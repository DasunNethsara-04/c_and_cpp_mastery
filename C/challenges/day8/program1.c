// Count Vowels and Consonants
// Input: "Hello World"
// Output: Vowels = 3, Consonants = 7

#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[100];
    char c;
    int vowels = 0, consonants = 0;

    // get input
    printf("Enter Text: ");
    fgets(string, sizeof(string), stdin);

    for (int i = 0; string[i] != '\0'; i++)
    {
        char c = string[i];
        if (!isalpha(c))
            continue;
        if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o')
            vowels++;

        else
            consonants++;
    }

    printf("Vowels = %d\nConsonnts = %d", vowels, consonants);

    return 0;
}