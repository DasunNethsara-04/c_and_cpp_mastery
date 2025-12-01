// Write a function that prints the frequency of each character in a string.


#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

static int getindex(const char letter)
{
    if (letter >= 'a' && letter <= 'z')
    {
        return letter - 'a';
    }
    return -1;
}

static char getchar(const int n)
{
    if (n >= 0 && n <= 25)
    {
        return static_cast<char>(n + 'a');
    }
    return '\0';
}

static void getfreq(std::string& text)
{
    int arr[26]{ 0 };
    int idx = 0;

    size_t len = text.length();

    for (char ch: text)
    {
        if (!isalpha(ch)) continue;
        idx = getindex(ch);

        if(idx != -1)
            arr[idx]++;
    }

    for (int i=0; i<26;i++)
    {
        if (arr[i] == 0) continue;
        std::cout << getchar(i) << " - " << arr[i] << "\n";
    }
}

int main()
{
    std::string text;

    std::cout << "Enter Text: ";
    std::getline(std::cin, text);

    std::transform(text.begin(), text.end(), text.begin(), ::tolower);

    getfreq(text);
}
