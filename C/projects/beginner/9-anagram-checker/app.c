//
// Project 9 - Anagram Checker
// Created by Dasun Nethsara on 7/26/25.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_len_same(const char str1[], const char str2[])
{
    return (strlen(str1) == strlen(str2)) ? 1 : 0;
}

void get_freq(const char str[], int arr[])
{
    char c;
    int i = 0;

    while (str[i] != '\n')
    {
        c = toupper(str[i]);
        arr[c - 65]++;
        i++;
    }
}

int is_anagram(const char str1[], const char str2[])
{
    int freq1[26] = {0};
    int freq2[26] = {0};

    if (!is_len_same(str1, str2))
        return 0;

    get_freq(str1, freq1);
    get_freq(str2, freq2);

    for (int j = 0; j < 26; j++)
    {
        if (freq1[j] != freq2[j])
            return 0;
    }

    return 1;
}

int main()
{
    char text1[150], text2[150];

    // get the user input
    printf("Enter Text 1: ");
    fgets(text1, sizeof(text1), stdin);
    text1[strcspn(text1, "\n")] = '\0';

    printf("Enter Text 2: ");
    fgets(text2, sizeof(text2), stdin);
    text2[strcspn(text2, "\n")] = '\0';

    if (is_anagram(text1, text2))
        printf("Word are Anagrams\n");
    else
        printf("Those words are not anagrams\n");

    return 0;
}