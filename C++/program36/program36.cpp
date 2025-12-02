// Convert all lowercase letters to uppercase using pointers.

#include <iostream>
#include <cctype>

char getupper(const char c)
{
    if (c >= 'a' && c <= 'z') return c - 32;
    return c;
}

void upper(char *str)
{
    char* ptr = str;
    
    while (*ptr != '\0')
    {
        *ptr = getupper(*ptr);
        ptr++;
    }
}

void upper(std::string& str)
{
    char* ptr = &str[0];
    while (*ptr != '\0')
    {
        *ptr = getupper(*ptr);
        ptr++;
    }
}

int main()
{
    char text[] = "helLo!";
    std::string text2 = "Hello!";

    std::cout << "Original Text 1: " << text << std::endl;

    upper(text);

    std::cout << "Changed Text 1: " << text << std::endl;   

    std::cout << "Original Text 2: " << text2 << std::endl;

    upper(text2);

    std::cout << "Changed Text 2: " << text2 << std::endl;

}