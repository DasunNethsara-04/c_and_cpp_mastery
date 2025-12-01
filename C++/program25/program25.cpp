// Swap two integers using pointers (no return value).

#include <iostream>

// using pointers
static void swap(int* n1, int* n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

// using references in C++
static void swap2(int& n1, int& n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int a = 5;
    int b = 6;
    int c = 2;
    int d = 3;

    std::cout << "With Pointers: Before Change: a: " << a << "\tb: " << b << std::endl;

    // using pointers
    swap(&a, &b);

    std::cout << "With Pointers:  After Change: a: " << a << "\tb: " << b << std::endl;

    std::cout << std::endl;

    std::cout << "With References: Before Change: a: " << c << "\tb: " << d << std::endl;

    // using references
    swap2(c, d);

    std::cout << "With References:  After Change: a: " << c << "\tb: " << d << std::endl;
}
