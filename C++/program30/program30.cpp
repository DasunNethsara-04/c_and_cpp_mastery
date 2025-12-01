// Count how many elements in an array are even using only a pointer that walks through the array.

#include <iostream>

int main()
{
    int arr[]{ 6, 7, 8, 4, 3, 2, 0, 9, 10, 60, 4, 2 };
    size_t evencount = 0;

    for (int* ptr = arr; ptr < arr + std::size(arr); ptr++)
        if (*ptr % 2 == 0) evencount++;

    std::cout << "Even values of the array: " << evencount << std::endl;

    return 0;
}
