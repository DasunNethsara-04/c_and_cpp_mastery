//
// Created by Dasun Nethsara on 7/21/25.
//

#include <stdio.h>

/*
   Get the length of a string
*/
unsigned int myStrLen(const char *str) {
    unsigned int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

/*
   Copy the content in the src string to the destination string
*/
void myStrCpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

/*
    Compare str1 with str2
*/
int myStrCmp(const char *str1, const char *str2) {
    int flag = 0;
    while (*str1 && *str2) {
        if (*str1 != *str2)
            return 1;
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0') ? 0 : 1;
}

/*
    Append Source string to the destination string
*/
void myStrConcat(char *dest, const char *src) {
    // go to end of the destination string
    while (*dest != '\0')
        dest++;

    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}


int main() {
    char string1[] = "Hello World!";
    char string2[] = "Hello";
    char string3[] = "Hello";
    char string4[] = "World";
    char string5[] = "Hello";
    char emptStr[100];

    const unsigned int len = myStrLen(string1);
    printf("Length: %d\n", len);

    myStrCpy(emptStr, string2);
    printf("%s\n", emptStr);

    if (myStrCmp(string3, string4) == 0)
        printf("Same\n");
    else
        printf("Not Same\n");

    myStrConcat(string3, string4);
    printf("Concatenated String: %s\n", string3);
}
