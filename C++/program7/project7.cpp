

#include <iostream>

int main()
{
    int n;
    std::cout << "Enter Number: ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Please enter a number greater than 0";
        return 1;
    }

    for (int i=n; i>0; i--)
    {
        for (int j = i; j>0; j--)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}