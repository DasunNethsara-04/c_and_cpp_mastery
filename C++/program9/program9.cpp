
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1)
            {
                std::cout << "* ";
            }
            else
            {
                if (j == 0 || j == n - 1)
                    std::cout << "* ";
                else
                    std::cout << "  ";
            }
        }
        std::cout << "\n";
    }
}