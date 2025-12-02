// Count how many words in a sentence (pointer method).

#include <iostream>
#include <cctype>

size_t countwords(const std::string& text) {
    size_t words = 0;
    bool inWord = false;
    const char* ptr = text.c_str();

    while (*ptr != '\0') {
        if (isspace(static_cast<unsigned char>(*ptr)) || *ptr == '\n' || *ptr == ',') {
            inWord = false;
        }
        else {
            if (!inWord) {
                words++;
                inWord = true;
            }
        }
        ptr++;
    }
    return words;
}

int main() {
    const std::string text = "Hello World, this is C++!";

    size_t count = countwords(text);

    std::cout << "Words: " << count << std::endl;
}
