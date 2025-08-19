//
// Created by techs on 8/19/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    int *arr;

    printf("Enter Count: ");
    scanf("%d", &number);

    arr = calloc(number, sizeof(int));

    if(arr == NULL)
    {
        printf("Couldn't allocate memory for the array!\n");
        return 1;
    }

    // get values for the array
    for(int i=0; i<number; i++)
    {
        printf("Enter Value for #%d", i+1);
        scanf("%d", &arr[i]);
    }

    // display the values
    printf("\nOutput\n");
    for(int i=0; i<number;i++)
    {
        printf("Value #%d is: %d\n", i+1, arr[i]);
    }


    free(arr);
    arr = NULL;

    return 0;
}