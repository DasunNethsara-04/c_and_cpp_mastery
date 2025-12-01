//
// Created by techs on 9/4/2025.
//

#include <stdio.h>
#include "common.h"

int find_length() {
    char c;
    int len = 0;
    FILE *fptr = fopen(TODO_DATABASE, "r");
    if (fptr == NULL) {
        // assume that there is no text file in the directory
        FILE *fptr2 = fopen(TODO_DATABASE, "w");
        if (fptr2 == NULL) {
            printf("Error\n");
            return 1;
        } else {
            fclose(fptr2);
        }
    }

    c = getc(fptr);
    while (c != EOF) {
        if (c == '\n')
            len++;
        c = getc(fptr);
    }

    fclose(fptr);
    return len;
}