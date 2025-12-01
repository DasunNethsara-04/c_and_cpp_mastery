// Input 10 integers and find the maximum and minimum.

#include <iostream>
#include <limits>

int main()
{
    int nums[10] = { 0 };
    int maxInt = INT_MIN, minInt = INT_MAX;

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter Number for index " << i << ": ";
        std::cin >> nums[i];

        if (nums[i] > maxInt) maxInt = nums[i];
        if (nums[i] < minInt) minInt = nums[i];
    }

    std::cout << std::endl;

    std::cout << "Maximum Value: " << maxInt << std::endl;
    std::cout << "Minimum Value: " << minInt << std::endl;
}