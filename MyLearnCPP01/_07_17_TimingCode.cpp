#include "_07_17_TimingCode.h"
#include <array>
#include <iostream>

const int g_arrayElements = 10000;

void _07_17_TimingCode::Test()
{
	Test01();
	Test02();
}

void SortArray1(std::array<int, g_arrayElements> &array)
{

	// Step through each element of the array
	// (except the last one, which will already be sorted by the time we get there)
	for (int startIndex = 0; startIndex < g_arrayElements - 1; ++startIndex)
	{
		// smallestIndex is the index of the smallest element we’ve encountered this iteration
		// Start by assuming the smallest element is the first element of this iteration
		int smallestIndex = startIndex;

		// Then look for a smaller element in the rest of the array
		for (int currentIndex = startIndex + 1; currentIndex < g_arrayElements; ++currentIndex)
		{
			// If we've found an element that is smaller than our previously found smallest
			if (array[currentIndex] < array[smallestIndex])
				// then keep track of it
				smallestIndex = currentIndex;
		}

		// smallestIndex is now the smallest element in the remaining array
		// swap our start element with our smallest element (this sorts it into the correct place)
		std::swap(array[startIndex], array[smallestIndex]);
	}
}

void _07_17_TimingCode::Test01()
{
	std::array<int, g_arrayElements> array;
	for (int i = 0; i < g_arrayElements; ++i)
		array[i] = g_arrayElements - i;

	Timer t;

	SortArray1(array);

	std::cout << "Time taken: " << t.Elapsed() << " seconds\n";
}


void _07_17_TimingCode::Test02()
{
	std::array<int, g_arrayElements> array;
	for (int i = 0; i < g_arrayElements; ++i)
		array[i] = g_arrayElements - i;

	Timer t;

	std::sort(array.begin(), array.end());

	std::cout << "Time taken: " << t.Elapsed() << " seconds\n";
}

