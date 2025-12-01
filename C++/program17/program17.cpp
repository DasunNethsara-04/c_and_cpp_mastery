// Count vowels, consonants, digits, spaces in a string.

#include <iostream>

static int isAlpha(const char c)
{
    unsigned int ascii = (unsigned int)c;
    if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) return 1;
    else return 0;
}

static int isDigit(const char c)
{
    unsigned int ascii = (unsigned int)c;
    if (ascii >= 48 && ascii <= 57) return 1;
    else return 0;
}

static int isSpace(const char c)
{
    unsigned int ascii = (unsigned int)c;
    if (ascii == 32) return 1;
    else return 0;
}

int main()
{
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    char text[] = "Hello World 123";

    int i = 0;
    while (text[i] != '\0')
    {
        if (isSpace(text[i]))
        {
            spaces++;
        }
        else if (isDigit(text[i]))
        {
            digits++;
        }
        else if (isAlpha(text[i]))
        {
            if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' ||
                text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
            {

                vowels++;
            }
            else 
            {
                consonants++;
            }
        }
        i++;
    }

    std::cout << "Vowels: " << vowels << std::endl;
    std::cout << "Consonants: " << consonants << std::endl;
    std::cout << "Digits: " << digits << std::endl;
    std::cout << "Spaces: " << spaces << std::endl;
}