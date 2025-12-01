
#include <iostream>

int main()
{
    int n;
    std::cout << "Enter Number: ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Please enter a number greater than 0!" << std::endl;
        return 1;
    }

    for (int i=1; i<=n; i++)
    {
        for (int j = 0; j < i; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}
