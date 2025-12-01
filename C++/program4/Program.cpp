#include <iostream>

int main()
{
	int count = 0;
	int num, digit = 0;

	std::cout << "Enter Number: ";
	std::cin >> num;

	while (num != 0)
	{
		count++;
		num = num / 10;
	}

	std::cout << "Length of the number: " << count << std::endl;

	return 0;
}