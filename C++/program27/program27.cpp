// Print the array values using only pointers, no [].

#include <iostream>

int main()
{
    int arr[]{ 6, 3, 7, 8, 1, 4, 9 };
    int* ptr = arr;

    const int len = std::size(arr);

    for (int i = 0; i < len; i++, ptr++)
        std::cout << *ptr << std::endl;
    
    std::cout << std::endl;
    
    for(int *ptr2=arr; ptr2 < arr + std::size(arr);ptr2++)
        std::cout << *ptr2 << std::endl;

}
