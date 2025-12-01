// Write your own strlen() function without using library function

#include <iostream>

static size_t Strlen(const char* message)
{
    size_t len{ 0 };
    while (message[len] != '\0')
    {
        len++;
    }
    return len;
}

int main()
{
    char msg[1024] {};

    std::cout << "Enter Text: ";
    std::cin >> msg;

    std::cout << Strlen(msg) << std::endl;
    
    return 0;
}