// Write a function to remove all spaces from a string.

#include <iostream>
#include <string>
#include <cctype>

static void removeSpaces(std::string& text)
{
    std::string newtext;
    for(const auto& c:text)
    {
        if (isspace(c)) continue;
        newtext.push_back(c);
    }

    text = newtext;
}

int main()
{
    std::string text;

    std::cout << "Enter Text: ";
    std::getline(std::cin, text);

    std::cout << "Original Text: " << text << std::endl;

    removeSpaces(text);

    std::cout << "After spaces removed Text: " << text << std::endl;

}