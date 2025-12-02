// Compare two strings using pointers (no index).

#include <iostream>

bool Strcmp(const std::string& str1, const std::string& str2)
{
    const char* ptr1 = str1.c_str();
    const char* ptr2 = str2.c_str();

    while (*ptr1 != '\0' && *ptr2 != '\0')
    {
        if (*ptr1 != *ptr2) return false;
        ptr1++;
        ptr2++;
    }

    return *ptr1 == '\0' && *ptr2 == '\0';
}

int main()
{
    std::string text1 = "Hello";
    std::string text2 = "Hello";

    if (Strcmp(text1, text2))
        std::cout << "Strings are equal!" << std::endl;
    else
        std::cout << "Strings are not equal!" << std::endl;
}