// Write a function that returns GCD of two numbers. (without recursion)

#include <iostream>

static int gcd(int a, int b)
{
    int mod = 0;
    
    while (b != 0)
    {
        mod = a % b;
        a = b;
        b = mod;
    }

    return a;
}

int main()
{
    int n1 = 0, n2 = 0;
    std::cout << "Enter Number 1: ";
    std::cin >> n1;

    std::cout << "Enter Number 2: ";
    std::cin >> n2;

    int gcdval = gcd(n1, n2);
    if (gcdval == -1)
    {
        std::cout << "Unknown error found!" << std::endl;
        return 1;
    }

    std::cout << "GCD of " << n1 << " and " << n2 << " is: " << gcdval << std::endl;

    return 0;
}