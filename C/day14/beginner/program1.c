//
// Created by techs on 8/19/2025.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *var = malloc(sizeof(int));

    if (var == NULL)
        return 0;

    *var = 45;

    printf("Value of the custom variable: %d", *var);

    free(var);
    var = NULL;


    return 0;
}