//
// Created by dasun on 7/21/25.
//
#include <stdio.h>
#include <string.h>

void cpy(char *str1, const char *str2) {
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';

}

int main() {
    char str1[] = {};
    char str2[] = "World";

    cpy(str1, str2);

    printf("%s", str1);
}