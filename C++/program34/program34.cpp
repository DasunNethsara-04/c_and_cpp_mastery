// Count characters in a string using a pointer (no index).


#include <iostream>

size_t countchar(std::string& str)
{
    const char* ptr = str.c_str();
    size_t count = 0;

    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    return count;
}

int main()
{
    std::string text = "Hello World!";

    size_t len = countchar(text);

    std::cout << "Characters: " << len << std::endl;
}