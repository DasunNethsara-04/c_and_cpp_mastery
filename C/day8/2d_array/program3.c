#include <stdio.h>

int main(void)
{
    int numArray[2][3];

    // get user inputs
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("Enter row value for %d,%d: ", row, col);
            scanf("%d", &numArray[row][col]);
        }
    }
    printf("\n");
    // calculate the sum of each row and column then display them
    int rowTotal = 0;
    for (int row = 0; row < 2; row++)
    {
        rowTotal = 0;
        for (int col = 0; col < 3; col++)
        {
            rowTotal += numArray[row][col];
            printf("%d ", numArray[row][col]);
        }
        printf(" => %d\n", rowTotal);
    }
}