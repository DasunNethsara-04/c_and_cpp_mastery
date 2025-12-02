// Remove all spaces from the string using two pointers.

#include <iostream>

void remspaces1(std::string& text) {
    if (text.empty()) return;

    std::string temp;
    char* ptr = &text[0];

    while (*ptr != '\0')
    {
        if (std::isspace(static_cast<unsigned char>(*ptr)))
        {
            ptr++;
            continue;
        }
        temp.push_back(static_cast<unsigned char>(*ptr));
        ptr++;
    }
    text = temp;
}

void remspaces2(std::string& text) {
    if (text.empty()) return;

    char* read_ptr = &text[0];
    char* write_ptr = &text[0];

    while (*read_ptr != '\0') {
        if (!std::isspace(static_cast<unsigned char>(*read_ptr))) {
            *write_ptr = *read_ptr;
            ++write_ptr;
        }
        ++read_ptr;
    }
    *write_ptr = '\0';
    text.resize(write_ptr - &text[0]);
}

int main()
{
    std::string text = "Hello World";

    std::cout << "Original Text: " << text << std::endl;

    remspaces2(text);

    std::cout << "Altered Text: " << text << std::endl;
}
