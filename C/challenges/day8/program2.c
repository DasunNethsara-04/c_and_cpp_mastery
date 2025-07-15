// Character Frequency Counter
// Input : "banana"
// Output : b = 1, a = 3, n = 2

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findFrequency(char sting[]);
void printFreq(int arr[]);

int main()
{
    char text[50]; // to store the user input text

    // get user input
    printf("Enter Text: ");
    fgets(text, sizeof(text), stdin);

    findFrequency(text);
}

void findFrequency(char string[])
{
    int freq[26] = {0};
    int ascii = 0;
    for (int i = 0, len = strlen(string); i < len; i++)
    {
        if (!isalpha(string[i]))
            continue;
        ascii = string[i] - 32;
        freq[ascii - 65]++;
    }
    printFreq(freq);
}
void printFreq(int arr[])
{
    printf("\n");
    for (int i = 0; i < 26; i++)
    {
        // printf("%d - %c", i+65, )
        if (arr[i] != 0)
        {
            printf("%d - %c = %d\n", i + 65, i + 65, arr[i]);
        }
    }
}