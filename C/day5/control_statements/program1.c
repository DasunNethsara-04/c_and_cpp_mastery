// if statements

#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("Access Denied!\n");
    }

    // if the there is one statement in the if block, you can remove the curly brackets
    int number = 10;
    if (number > 5)
        printf("OK!\n");

    return 0;
}