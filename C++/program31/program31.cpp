// Reverse an array using pointers (swap using pointers).

#include <iostream>

int main()
{
	int arr[]{ 6, 7, 8, 4, 3, 2, 0, 9, 10, 60, 4, 2 };
	int* start_ptr = arr;
	int* end_ptr = arr + (std::size(arr) - 1);
	int temp = 0;

	for (; start_ptr < end_ptr; )
	{
		temp = *start_ptr;
		*start_ptr = *end_ptr;
		*end_ptr = temp;

		start_ptr++;
		end_ptr--;
	}

	for (int elmt : arr)
		std::cout << elmt << " ";
}