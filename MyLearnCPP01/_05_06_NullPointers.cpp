#include "_05_06_NullPointers.h"
#include <iostream>
#include <cstddef>

void _05_06_NullPointers::Test()
{
	Test01();
}

void _05_06_NullPointers::Test01()
{
	float* ptr1{0};
	float* ptr2;
	ptr2 = 0;

	//error ptr is null
	//std::cout << *ptr1 << ' ' << ptr2 << '\n';
	if (ptr1 == ptr2 && ptr2 == nullptr)
	{
		std::cout << "ptr1 and ptr2 is null\n";
	}

	double* ptr3{0};

	if (ptr3)
	{
		std::cout << "ptr is pointing to a double value ";
	}
	else
	{
		std::cout << "ptr is a null pointer";
	}

	int* ptr4 = NULL; //导入 cstddef for NULL
	print(ptr4); //
	print(0); //
	print(NULL); //

	int* ptr5 = nullptr; //C++11引入
	print(ptr5);

	doSomething(nullptr);

	std::cout << "NULLPTR == NULL" << (nullptr == NULL) << '\n';
}

void _05_06_NullPointers::print(int x)
{
	std::cout << "print(int): " << x << '\n';
}

void _05_06_NullPointers::print(int* x)
{
	if (!x)
		std::cout << "print(int*): null\n";
	else
		std::cout << "print(int*): " << *x << '\n';
}

//std::nullptr_t 只能接受空值
void _05_06_NullPointers::doSomething(std::nullptr_t ptr)
{
	if (ptr == nullptr)
		std::cout << "in doSomething()\n";
}
