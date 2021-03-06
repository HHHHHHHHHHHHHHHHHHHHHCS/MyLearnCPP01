﻿#include "_05_09_DynamicMemoryAllocation.h"
#include <iostream>

void _05_09_DynamicMemoryAllocation::Test()
{
	Test01();
	Test02();
}

void _05_09_DynamicMemoryAllocation::Test01()
{
	int array[1000000 / 4]; //C++限制是1MB 不然会stackOverflow
	std::cout << sizeof(array) << ' ' << array << std::endl;


	int* ptr = new int;
	std::cout << *ptr << ' ';
	*ptr = 7;
	std::cout << *ptr << '\n';

	int* ptr1 = new int(5);
	int* ptr2 = new int{6};

	std::cout << ptr1 << ' ' << *ptr2 << std::endl;

	delete ptr; //删除指针
	ptr = 0; //并且地址归零
	std::cout << ptr << std::endl;

	int value = 5;
	int* ptr0 = new int; // allocate memory
	delete ptr; // return memory back to operating system
	ptr0 = &value; // reassign pointer to address of value
	std::cout << *ptr0 << ' ' << ptr0;
}


void _05_09_DynamicMemoryAllocation::Test02()
{
	int fixedArray[5] = {9, 7, 5, 3, 1}; // initialize a fixed array in C++03
	int* array = new int[5]{9, 7, 5, 3, 1}; // initialize a dynamic array in C++11

	delete[] array;
}
