#include <stdio.h>

int main()
{
    char name[30];

    printf("Enter Name: ");
    scanf("%s", name);

    unsigned int length = 0;

    // implementation of the strlen()
    int i = 0;
    while (name[i] != '\0')
    {
        i++;
        length++;
    }

    printf("Length is: %d", length);

    return 0;
}