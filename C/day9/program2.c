#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];

    printf("Enter Name: ");
    // fgets(name, sizeof(name), stdin);
    scanf("%s", name);

    unsigned int length = strlen(name);

    printf("Length is: %d", length);

    return 0;
}