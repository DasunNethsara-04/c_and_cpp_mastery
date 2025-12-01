// Implement your own strcpy() using pointer arithmetic.


#include <iostream>
#include <string>

void strcopy(char *src, char *dest)
{
    char* src_ptr = src;
    char* dest_ptr = dest;

    while (*src_ptr != '\0')
    {
        *dest_ptr = *src_ptr;
        src_ptr++;
        dest_ptr++;
    }
    *dest_ptr = '\0';
}

int main()
{
    char srctext[20] = "Hello";
    char desttext[20];

    strcopy(srctext, desttext);

    std::cout << "Original Text: " << srctext << std::endl;
    std::cout << "Copied Text: " << desttext << std::endl;
}
