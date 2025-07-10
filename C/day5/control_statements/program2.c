// if...else... statemenst

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
    else
    {
        printf("Access Granted!\n");
    }

    return 0;
}