// Check if Two Strings are Anagrams
// Input: "listen" and "silent"
// Output: Yes, they are anagrams

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkFrequency(char string1[], char string2[])
{
    int freq1[26] = {0};
    int freq2[26] = {0};
    int ascii = 0;
    for (int i = 0, len = strlen(string1); i < len; i++)
    {
        if (!isalpha(string1[i]))
            continue;
        ascii = string1[i] - 32;
        printf("%c\n", ascii);
        freq1[ascii - 65]++;
    }
    printf("\n");
    for (int i = 0, len = strlen(string2); i < len; i++)
    {
        if (!isalpha(string2[i]))
            continue;
        ascii = string2[i] - 32;
        printf("%c\n", ascii);
        freq2[ascii - 65]++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d => %d\n", freq1[i], freq2[i]);
        if (freq1[i] != freq2[i])
            return 0;
    }
    return 1;
}

int isAnagram(char word1[], char word2[])
{
    if (strlen(word1) != strlen(word2))
        return 0;

    if (checkFrequency(word1, word2))
        return 1;
    else
        return 0;
}

int main()
{
    char word1[20];
    char word2[20];

    // get user input
    printf("Enter Word 1: ");
    fgets(word1, sizeof(word1), stdin);
    printf("Enter Word 2: ");
    fgets(word2, sizeof(word2), stdin);

    if (isAnagram(word1, word2))
        printf("Yes, they are anagrams\n");
    else
        printf("No, they are not anagrams");

    return 0;
}