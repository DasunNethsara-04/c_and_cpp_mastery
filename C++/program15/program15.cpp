// Write your own strcpy() function.

#include <iostream>

static size_t Strlen(const char* str)
{
    size_t len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

static void Strcpy(char* dest, const char* src)
{
    size_t i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main()
{
    char txt1[] = "World";
    char txt2[20] = "";

    Strcpy(txt2, txt1);

    std::cout << "SRC: " << txt1 << std::endl;
    std::cout << "DEST: " << txt2 << std::endl;
}