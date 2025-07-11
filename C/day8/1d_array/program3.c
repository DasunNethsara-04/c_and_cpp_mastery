#include <stdio.h>

int main(void)
{
    int numsArray[10];
    int oddCount = 0, evenCount = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter Numbers: ");
        scanf("%d", &numsArray[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (numsArray[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
}