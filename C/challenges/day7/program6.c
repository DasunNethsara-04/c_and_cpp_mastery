// Bonus Challenge: Palindrome Checker
// Write a function that checks if a given string is a palindrome (reads the same forward and backward).
// Input:  madam
// Output : It is a palindrome
// Input : hello
// Output : Not a palindrome

#include <stdio.h>
#include <string.h>

int isPalindrome(char string[]);

int main()
{
    char text[50];

    printf("Enter Text: ");
    scanf("%s", text);

    if (isPalindrome(text) == 0)
        printf("It is a palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

int isPalindrome(char string[])
{
    int flag = 0;
    unsigned int len = strlen(string);
    for (int i = 0; i < len/2; i++)
    {
        if (string[i] != string[len - 1 - i])
        {
            flag = 1;
        }
    }
    return flag;
}