#include "_09_05_Container.h"
#include <iostream>

void _09_05_Container::Test()
{
	IntArray array(10);

	for (int i{0}; i < 10; ++i)
		array[i] = i + 1;

	array.InsertBefore(20, 5);

	array.Remove(3);

	array.InsertAtEnd(30);

	array.InsertAtBeginning(40);

	for (int i{0}; i < array.GetLength(); ++i)
		std::cout << array[i] << ' ';

	std::cout << '\n';
}
