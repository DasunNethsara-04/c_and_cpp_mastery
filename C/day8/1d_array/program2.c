#include <stdio.h>

int main(void)
{
    int total;
    float avg;
    int marksArr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Marks: ");
        scanf("%d", &marksArr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        total += marksArr[i];
    }

    avg = total / 5;

    printf("Average is: %.2f\n", avg);
}