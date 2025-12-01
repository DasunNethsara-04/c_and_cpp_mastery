// Print the address of a variable using a pointer.

#include <iostream>

int main()
{
    int var = 23;

    int* ptr = &var;

    std::cout << ptr << std::endl;


    return 0;
}