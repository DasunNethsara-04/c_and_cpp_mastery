//
// Project 6 - String Toolkit (strlen, strcpy, strcmp, strcat) without pointers
// Created by Dasun Nethsara on 7/25/25.
//

#include <stdio.h>

/*
Get the length of a string (without \0 terminator)
*/
unsigned int myStrlen(const char str[])
{
    unsigned int len = 0, i = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }
    return len;
}

int main()
{
    char string1[20] = "Hello World!";
    char string2[50];
    char string3[20] = "Hello";
    char string4[50] = "Hello";
    char string5[50] = "World!";
    int i = 0;

    // To check the string length checker code
    printf("String Length: %d\n", myStrlen(string1));

    // to check the string copy functionality (strcpy)
    while (string3[i] != '\0')
    {
        string2[i] = string3[i];
        i++;
    }
    string2[i] = '\0';

    printf("Copied Content: %s\n", string2);

    // to check the string compare functionality (strcmp)
    int flag = 1;
    for (int i = 0; string3[i] != '\0' || string4[i] != '\0'; i++)
    {
        if (string3[i] != string4[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Strings are same!\n");
    else
        printf("Strings are not same!\n");

    // to check the string concatenate functionality (strcat)
    int j = 0;
    unsigned int len = myStrlen(string4);
    for (int k = 0; string5[k] != '\0'; k++, j = k)
    {
        string4[len + k] = string5[k];
    }
    string4[len + j] = '\0';

    printf("Concatenated String: %s\n", string4);

    return 0;
}