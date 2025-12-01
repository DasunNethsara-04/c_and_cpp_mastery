// Count how many positive, negative, and zero values are in the array.

#include <iostream>
#include <cstdlib>

int main()
{
    int count = 0, positives = 0, negatives = 0, zeros = 0;

    // get the array length from the user
    std::cout << "Enter the array length: ";
    std::cin >> count;

    // check if the length is greater than 0 or not
    if (count < 1)
    {
        std::cout << "Array length must be greater than 0!" << std::endl;
        return 1;
    }

    // make the array using malloc
    int* arr = (int*) malloc(count * sizeof(int));

    // check if the memory allocation success or not
    if (arr == NULL)
    {
        std::cout << "memory allocation failed!" << std::endl;
        return 1;
    }

    // store values to the array
    for (int i=0; i<count; i++)
    {
        std::cout << "Enter value for the index of " << i << ": ";
        std::cin >> arr[i];
    }

    // check for values
    for (int i=0; i<count; i++)
    {
        if (arr[i] > 0) positives++;
        else if (arr[i] < 0) negatives++;
        else if (arr[i] == 0) zeros++;
        else continue;
    }

    // display the positive, negative and zero counts
    std::cout << "Positive Numbers: " << positives << std::endl;
    std::cout << "Negative Numbers: " << negatives << std::endl;
    std::cout << "Zeros: " << zeros << std::endl;

    // free the memory allcoated for the array
    free(arr);

    return 0;
}
