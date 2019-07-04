#include "_05_07_PointerArithmetic.h"
#include <iostream>

//在C++中 指针+1 -1 代表上一个地址 和下一个地址
//不同数据类型 地址差不一样
void _05_07_PointerArithmetic::Test()
{
	//Test01();
	//Test02();
	Test03();
}

void _05_07_PointerArithmetic::Test01()
{
	int value = 7;
	int* ptr = &value;
	std::cout << ptr << '\n';
	std::cout << ptr + 1 << '\n';
	std::cout << ptr + 2 << '\n';
	std::cout << ptr + 3 << '\n';

	std::cout << '\n';
	short value1 = 7;
	short* ptr1 = &value1;

	std::cout << ptr1 << '\n';
	std::cout << ptr1 + 1 << '\n';
	std::cout << ptr1 + 2 << '\n';
	std::cout << ptr1 + 3 << '\n';
}

void _05_07_PointerArithmetic::Test02()
{
	int array[] = {9, 7, 5, 3, 1};

	std::cout << "Element 0 is at address: " << &array[0] << '\n';
	std::cout << "Element 1 is at address: " << &array[1] << '\n';
	std::cout << "Element 2 is at address: " << &array[2] << '\n';
	std::cout << "Element 3 is at address: " << &array[3] << '\n';

	std::cout << '\n';

	std::cout << &array[1] << '\n';
	std::cout << array + 1 << '\n';
	std::cout << array[1] << '\n';
	std::cout << *(array + 1) << '\n';
}


void _05_07_PointerArithmetic::Test03()
{
	const int arrayLength = 7;
	char name[arrayLength] = "Mollie";
	int numVowels(0);
	for (char* ptr = name; ptr < name + arrayLength; ++ptr)
	{
		switch (*ptr)
		{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
			++numVowels;
		}
	}

	std::cout << name << " has " << numVowels << " vowels.\n";
}
