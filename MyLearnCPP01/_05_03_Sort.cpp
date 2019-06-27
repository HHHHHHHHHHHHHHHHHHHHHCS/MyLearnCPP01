#include "_05_03_Sort.h"
#include <vector>
#include <iostream>

void _05_03_Sort::Test()
{
	TheSwap();
	EasySort();
}

void _05_03_Sort::TheSwap()
{
	int x{3}, y{5};
	printf("%d,%d\n", x, y);
	std::swap(x, y);
	printf("%d,%d\n", x, y);
}

void _05_03_Sort::EasySort()
{
	int array[]{1, 3, 5, 2, 4, 6};
	size_t length = std::size(array);

	for (int i = 0; i < length; i++)
	{
		int smaillIndex = i;
		for (int j = i ;j < length; j++)
		{
			if (array[smaillIndex] < array[j])
			{
				smaillIndex = j;
			}
		}

		std::swap(array[i], array[smaillIndex]);
	}

	for (auto item : array)
	{
		std::cout << item << '\t';
	}
}
