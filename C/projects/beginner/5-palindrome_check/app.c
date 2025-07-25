//
// Project 5 - Palindrome Checker (string)
// Created by Dasun Nethsara on 7/24/25.
//

#include <stdio.h>
#include <string.h>

int is_palindrome(char string[])
{
    int flag = 1;
    for (int i = 0, len = strlen(string); i < len / 2; i++)
    {
        if (string[i] != string[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    char string[30];

    // get the user input
    printf("Enter Text: ");
    scanf("%s", string);

    if (is_palindrome(string))
        printf("It is palindrome!\n");
    else
        printf("It is not a palindrome!\n");

    return 0;
}