#include <stdio.h>

void main(void)
{
    int age, citizen;
    printf("Enter your citizenship status (1 for citizen, 0 for not): ");
    scanf("%d", &citizen);
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18 && citizen == 1)
    {
        printf("Eligible to vote!\n");
    }
    else
    {
        printf("Not eligible to vote!\n");
    }
}