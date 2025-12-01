// Increase a variable's value by 10 using a function that accepts a pointer.


#include <iostream>

void increment(int* n)
{
    *n += 10;
}

void increment(int& n)
{
    n += 10;
}

int main()
{
    int num = 5;

    std::cout << "Original Value: " << num << std::endl;

    increment(&num);

    std::cout << "Pointer: After change Value: " << num << std::endl;

    increment(num);

    std::cout << "Reference: After Change Value: " << num << std::endl;


}