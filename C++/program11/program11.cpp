// Input an array and print it in reverse without creating another array.


#include <iostream>
#include <cstdlib>

int main()
{
    int numCount = 0;
    std::cout << "Enter array count: ";
    std::cin >> numCount;

    if (numCount < 1)
    {
        std::cout << "Array length must be greater than 1" << std::endl;
        return 1;
    }

    int *nums = (int*) malloc(numCount * sizeof(int));
    if (nums == NULL)
    {
        std::cout << "dynamic memory allocation failed!";
        return 1;
    }

    // save values to the array
    for (int i = 0; i < numCount; i++)
    {
        std::cout << "Enter Value for index " << i << ": ";
        std::cin >> nums[i];
    }

    // print in reverse order using for loop
    for (int i=numCount-1; i>=0; i--)
    {
        std::cout << nums[i] << "\n";
    }

    free(nums);

    return 0;
}