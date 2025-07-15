// Exercise 1: Input & Output
// Take a string input (name) and print a welcome message.
// Input: John
// Output: Welcome, John

#include <stdio.h>

int main(void)
{
    char name[30];

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Welcome, %s", name);
    return 0;
}