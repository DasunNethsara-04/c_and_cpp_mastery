// Bonus 2: Remove Duplicate Elements
// Take n numbers and print only unique ones.
// Input: 1 2 2 3 4 3 5
// Output : 1 2 3 4 5

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter value for %d index: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("\n");

    // TODO: implement the logic
}