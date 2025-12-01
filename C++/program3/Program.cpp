#include <iostream>

int main()
{
	int num, digit = 0;

	std::cout << "Enter Number: ";
	std::cin >> num;

    while(num != 0)
    {
        digit = num % 10;
        std::cout << digit;
        num = num / 10;
    }

	return 0;
}
