//
// Created by techs on 8/19/2025.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;
    printf("Enter Count: ");
    scanf("%d", &count);

    // create the array using malloc
    int *arr = malloc(count * sizeof(int));

    if (arr == NULL) {
        printf("Couldn't allocate memory for the array\n");
        return 1;
    }

    // get user inputs to fill the array
    for (int i = 0; i < count; i++) {
        printf("Enter Value for #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // display the values
    printf("\nOutput Values\n");
    for (int i = 0; i < count; i++) {
        printf("Value %d\n", arr[i]);
    }

    free(arr);


    return 0;
}