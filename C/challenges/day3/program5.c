// Pattern 5: Floyd’s Triangle
// Input: 4
// Output:
/*
 1
 2 3
 4 5 6
 7 8 9 10
 */
// hint: Use a count variable that increases with each print.

#include <stdio.h>

void main(void)
{
    int n, count = 1;
    printf("N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++, ++count)
        {
            printf("%d ", count);
        }
        printf("\n");
    }
}