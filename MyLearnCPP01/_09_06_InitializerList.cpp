#include "_09_06_InitializerList.h"
#include <iostream>

void _09_06_InitializerList::Test()
 {
	 IntArray array{ 5, 4, 3, 2, 1 }; // initializer list
	 for (int count = 0; count < array.GetLength(); ++count)
		 std::cout << array[count] << ' ';
 }
