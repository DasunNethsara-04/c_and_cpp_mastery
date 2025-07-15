// Count Words in a Sentence
// Input: "I love programming"
// Output : Words = 3

#include <stdio.h>

int countWords(char string[])
{
    int i = 0, count = 0;
    while (string[i] != '\0')
    {
        if (string[i] == ' ')
            count++;
        i++;
    }
    return count + 1;
}

int main()
{
    char text[100] = {};

    // input the string text from the user
    printf("Enter Text: ");
    fgets(text, sizeof(text), stdin);

    int words = countWords(text);

    printf("Words = %d\n", words);

    return 0;
}