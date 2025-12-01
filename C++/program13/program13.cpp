// Find the second largest element without sorting.
//

#include <iostream>
#include <cstdlib>
#include <climits>

int main()
{
    int count = 0;
    int largest = INT_MIN;
    int secLargest = INT_MIN;

    // get the array length
    std::cout << "Enter array length: ";
    std::cin >> count;

    // check the array length is not greater than 1
    if (count < 2)
    {
        std::cout << "The array length must be greater than 1!" << std::endl;
        return 1;
    }

    // initialize the array using the malloc
    int* arr = (int*)malloc(count * sizeof(int));
    
    // check if the memory allocation failed
    if (arr == NULL)
    {
        std::cout << "Memory allocation failed!" << std::endl;
        return 1;
    }

    // save the data to the array
    for (int i = 0; i < count; i++)
    {
        std::cout << "Enter value for the index of " << i << ": ";
        std::cin >> arr[i];
    }

    // check for the largest number in the array
    for (int i = 0; i < count; i++)
    {
        if (arr[i] > largest)
        {
            secLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secLargest && arr[i] != largest)
        {
            secLargest = arr[i];
        }
    }

    // display the results
    std::cout << "Largest Number: " << largest << std::endl;
    std::cout << "Second Largest Number: " << secLargest << std::endl;

    // free the memory allocated for the array
    free(arr);

    return 0;
}
