// Copy one array into another using only pointers.

#include <iostream>

void arrcpy(const int* src_arr, int* dest_arr, size_t size)
{
    const int* src_ptr = src_arr;
    int* dest_ptr = dest_arr;

    for (size_t i = 0; i < size; i++)
    {
        *dest_ptr = *src_ptr;
        src_ptr++;
        dest_ptr++;
    }
}

int main()
{
    int arr[]{ 6, 7, 8, 4, 3, 2, 0, 9, 10, 60, 4, 2 };
    int dest[12]{ 0 };

    std::cout << "Source Array: ";
    for (int v : arr)
        std::cout << v << " ";

    // cal the function
    arrcpy(arr, dest, std::size(arr));

    
    std::cout << std::endl;
    
    std::cout << "Destination Array: ";
    for (int v : dest)
        std::cout << v << " ";

}