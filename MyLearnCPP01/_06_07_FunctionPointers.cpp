#include "_06_07_FunctionPointers.h"
#include <iostream>

void _06_07_FunctionPointers::Test()
{
	//Test01();
	//Test02();
	Test03();
}

void _06_07_FunctionPointers::Test01()
{
	//std::cout << Test01_Func1<<'\n';//被警告拦截
	std::cout << reinterpret_cast<void*>(Test01_Func1) << '\n';

	int (*funcPtr)() = Test01_Func1;
	funcPtr = Test01_Func2;
	std::cout << funcPtr() << '\n';

	double (*douFunc)(double) = Test01_Func3;
	std::cout << (*Test01_Func3)(8) << ' ' << Test01_Func3(4)<<' '<< douFunc(4) << '\n';
}


int _06_07_FunctionPointers::Test01_Func1()
{
	return 5;
}

int _06_07_FunctionPointers::Test01_Func2()
{
	return 8;
}

double _06_07_FunctionPointers::Test01_Func3(double val)
{
	return val * val;
}

void _06_07_FunctionPointers::Test02()
{
	int array[] = { 3,7,9,5,6,1,8,2,4 };

	Test02_SelectionSort(array, std::size(array));
	Test02_PrintArray(array, std::size(array));

	Test02_SelectionSort(array, std::size(array),Test02_Myscending);
	Test02_PrintArray(array, std::size(array));
}

void _06_07_FunctionPointers::Test02_SelectionSort(int* array, size_t size, bool (*comparisonFunc)(int, int))
{
	for (int startIndex = 0; startIndex < size; startIndex++)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < size; currentIndex++)
		{
			if (comparisonFunc(array[smallestIndex], array[currentIndex]))
			{
				smallestIndex = currentIndex;
			}
		}
		std::swap(array[startIndex], array[smallestIndex]); //C++11
	}
}

bool _06_07_FunctionPointers::Test02_Ascending(int x, int y)
{
	return x > y;
}

bool _06_07_FunctionPointers::Test02_Descending(int x, int y)
{
	return x < y;
}

bool _06_07_FunctionPointers::Test02_Myscending(int x, int y)
{
	bool b1 = (x & 1) == 0;
	bool b2 = (y & 1) == 0;

	if (b1 && b2)
	{
		return x > y;
	}
	else if (!b1 && !b2)
	{
		return x < y;
	}
	else if (b1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void _06_07_FunctionPointers::Test02_PrintArray(int* array, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << ' ';
	}
	std::cout << '\n';
}


void _06_07_FunctionPointers::Test03()
{
	std::function<bool(int, int)> func1 = Test02_Ascending;
	std::cout << func1(1,4)<<'\n';
	auto func2 = Test02_Myscending;
	std::cout << func2(5,9)<<'\n';
}
