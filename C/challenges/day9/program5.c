// Power of a number (a^b) using recursion
#include <stdio.h>

int findPower(int base, int power)
{
    if (power == 0)
        return 1;
    return base * findPower(base, power - 1);
}

int main()
{
    int base = 0, power = 0;
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter power: ");
    scanf("%d", &power);

    int result = findPower(base, power);

    printf("%d into the power of %d is %d\n", base, power, result);

    return 0;
}