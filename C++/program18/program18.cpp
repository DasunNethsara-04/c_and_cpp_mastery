// Reverse a string in-place (no extra array).

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

int main()
{
    char text[] = "hello", temp;

    std::cout << "Original: " << text << std::endl;

    size_t len = Strlen(text);
    for (int i = 0; i < len / 2 ;i++)
    {
        temp = text[i];
        text[i] = text[len - 1 - i];
        text[len - 1 - i] = temp;
    }

    std::cout << "Reversed: " << text << std::endl;
}