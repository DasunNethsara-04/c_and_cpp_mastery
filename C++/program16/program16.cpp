// Write your own strcmp() function.

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

static int Strcmp(const char* str1, const char* str2)
{
    size_t str1len = Strlen(str1);
    for (int i = 0; i < str1len; i++) if (str1[i] != str2[i]) return 1;
    return 0;
}

int main()
{
    char txt1[] = "Hello";
    char txt2[] = "Hell1";

    if (Strcmp(txt1, txt2) == 0)
        std::cout << "Both strings are same!" << std::endl;
    else
        std::cout << "Strings aren't same!" << std::endl;

    return 0;
}
