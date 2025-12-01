// Write a function to check if a number is prime.

#include <iostream>
#include <stdbool.h>

static bool isPrime(int n)
{
    if (n <= 1)return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    int num = 0;

    std::cout << "Enter Number: ";
    std::cin >> num;

    if (isPrime(num))
        std::cout << num << " is a Prime Number!" << std::endl;
    else
        std::cout << num << " is not a Prime Number!" << std::endl;

    return 0;
}