// if...else if...else statements

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Invalid Marks\n");
    }
    if (marks >= 75)
    {
        printf("A\n");
    }
    else if (marks >= 50)
    {
        printf("B\n");
    }
    else if (marks >= 30)
    {
        printf("C\n");
    }
    else
    {
        printf("F\n");
    }
}