// Write a function that checks if a string is palindrome.

#include <iostream>
#include <string>

static bool isPalindrome(const std::string& str)
{
    size_t len = str.length(), i = 0;
    while (i < len / 2)
    {
        if (str[i] != str[len - 1 - i]) 
        {
            return false;
        }
        i++;
    }
    return true;
}

int main()
{
    std::string word;

    std::cout << "Enter a word: ";
    std::cin >> word;

    if (isPalindrome(word))
        std::cout << word << " is a Palindrome!" << std::endl;
    else 
        std::cout << word << " is not a Palindrome!" << std::endl;

}