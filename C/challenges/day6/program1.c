// Exercise 1: Print a 2D Matrix
// Input: 3x3
// Output:
/*
1 2 3
4 5 6
7 8 9
*/

#include <stdio.h>

int main()
{
    int row = 0, col = 0, val = 1;
    printf("Enter No. of Rows: ");
    scanf("%d", &row);
    printf("Enter No. of Columns: ");
    scanf("%d", &col);

    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++, val++)
        {
            printf("%d ", val);
        }
        printf("\n");
    }

    return 0;
}