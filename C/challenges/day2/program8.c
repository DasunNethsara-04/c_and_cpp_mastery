// Optional Bonus Challenges (If You Want More)
// ⭐ Challenge 1 : Print even numbers from 2 to N

#include <stdio.h>

void main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
}