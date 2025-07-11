#include <stdio.h>

int main(void)
{
    int numArray1[5], numArray2[5], answerArray[5];

    // get inputs for the first array
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number for %d index of the first array: ", i);
        scanf("%d", &numArray1[i]);
    }
    printf("\n");

    // get inputs for the second array
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number for %d index of the first array: ", i);
        scanf("%d", &numArray2[i]);
    }

    // calculate the sum of thoese two arrays and insert them into the 3rd array(answerArray)
    for (int i = 0; i < 5; i++)
    {
        answerArray[i] = numArray1[i] + numArray2[i];
    }
    printf("\n");

    printf("Elements in the first array: ");
    // display the first array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numArray1[i]);
    }
    printf("\n");

    printf("Elements in the first array: ");
    // display the second array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numArray2[i]);
    }
    printf("\n");

    printf("Elements in the answer array: ");
    // display the answer array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", answerArray[i]);
    }
    printf("\n");
}