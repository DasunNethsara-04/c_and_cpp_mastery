// Print multiplication table for a number up to 20.

#include <iostream>

int main()
{
	int num = 0;

	std::cout << "Enter Number: ";
	std::cin >> num;

	std::cout << std::endl;

	for (int i = 1; i <= 20; i++)
	{
		std::cout << i << " x " << num << " = " << i * num << "\n";
	}
}