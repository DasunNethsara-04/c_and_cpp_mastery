#include <iostream>

int main()
{
	int number, total = 0;

	std::cout << "Enter Number: ";
	std::cin >> number;

	if (number <= 0)
	{
		std::cout << "Number must be greater than 0!\n";
		return 1;
	}

	while (number != 0)
	{
		total = total + number % 10;
		number = number / 10;
	}

	std::cout << "Total: " << total << std::endl;

	return 0;
}