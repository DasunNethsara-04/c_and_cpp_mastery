//
// Project 8 - Frequency of Characters in a String
// Created by Dasun Nethsara on 7/25/25.
//

#include <stdio.h>
#include <string.h>

void print_freq(int freq[])
{
    for (int i = 0; i < 94; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d - %c = %d\n", i + 33, i + 33, freq[i]);
        }
    }
}

void find_frequency(char text[])
{
    int arr[94] = {0};
    int i = 0, ascii = 0;

    while (text[i] != '\n')
    {
        // printf("%d\n", text[i] - 33);
        // printf("%c - %d\n", text[i], text[i] - 33);
        ascii = text[i] - 32;
        arr[ascii - 33]++;
        i++;
    }
    printf("\n");
    print_freq(arr);
}

int main()
{
    char string[100];

    // get the user input
    printf("Enter Text: ");
    fgets(string, sizeof(string), stdin);

    find_frequency(string);

    return 0;
}