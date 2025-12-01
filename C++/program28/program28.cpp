// Find the largest number in an array using only pointers.

#include <iostream>

int main()
{
    int arr[]{ 6, 7, 8, 4, 3, 2, 0, 9, 10, 60, 4, 2 };
    int largest = *arr;

    for (int* ptr = arr; ptr < arr + std::size(arr); ptr++)
    {
        if (*ptr > largest) largest = *ptr;
    }

    std::cout << "Largest Number: " << largest << std::endl;

    return 0;
}