// Find the number is even or odd without using % operator

#include <iostream>
#include <stdbool.h>

static bool isEven(const int num)
{
	return (num & 1) == 0;
}


int main()
{
	int number;
	std::cout << "Enter Number: ";
	std::cin >> number;

	// check the entered number is even or odd
	if (isEven(number))
		std::cout << number << " is Even\n";
	else
		std::cout << number << " is Odd\n";

	return 0;
}