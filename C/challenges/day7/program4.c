// Exercise 4: Compare Two Strings (Manual)
// Check if two strings are equal without using strcmp().
// Input : Apple, Apple
// Output : Strings are equal
// Input : Cat, Dog
// Output : Strings are not equal

#include <stdio.h>
#include <string.h>

int main()
{
    char text1[50], text2[50];
    int flag = 0;

    printf("Enter First Text: ");
    scanf("%s", text1);
    printf("Enter Second Text: ");
    scanf("%s", text2);

    for (int i = 0; text1[i] != '\0' || text2[i] != '\0'; i++)
    {
        if (text1[i] != text2[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Strings are not equal");
    else
        printf("Strings are equal");
}