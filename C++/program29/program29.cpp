/*
* Given an array, print:
    * first element
    * last element
    * middle element
* using pointer arithmetic, no indexing.
*/

#include <iostream>

int main()
{
    int arr[]{ 6, 7, 8, 4, 3, 12, 0, 9, 10, 60, 4, 2 };
    
    int* ptr = arr;

    // first element
    std::cout << "First Element: " << *ptr << std::endl;

    // middle element
    int* middle = arr + (std::size(arr) - 1) / 2;
    std::cout << "Middle Element: " << *middle << std::endl;

    // last element
    int* last = arr + std::size(arr) - 1;
    std::cout << "Last Element: " << *last << std::endl;
}
