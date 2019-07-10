#include "_05_10_PointersAndConst.h"
#include <iostream>

void _05_10_PointersAndConst::Test()
{
	Test01();
	Test02();
	Test03();
}

void _05_10_PointersAndConst::Test01()
{
	int value0 = 5;
	int* ptr0 = &value0;
	*ptr0 = 6;

	/* error:动态指针不能指向静态的2333 
	const int value = 5; 
	int *ptr = &value; 
	*ptr = 6;
	*/

	const int value1 = 5;
	const int* ptr1 = &value1;
	//*ptr1 = 6; // const *int 指针不能修改 const int 的内容
	//delete ptr1; //不能删除const指针

	int value2 = 5;
	const int* ptr = &value2;
	value2 = 6; // const *int 指针可以改变内容


	int val1 = 5;
	const int* ptrTwo = &val1;
	int val2 = 6;
	ptrTwo = &val2; //const *int指针可以修改自己指向的地址

	std::cout <<*ptr1<<' '<<*ptr;
}

void _05_10_PointersAndConst::Test02()
{
	int value = 5;
	int* const ptr = &value;

	std::cout << *ptr << '\n';

	int value1 = 5;

	int* const ptr1 = &value1;
	//int value2 = 6;
	//ptr1 = &value2; //int *const 不能修改指向的地址
	*ptr1 = 99; //但是可以修改 int 的值  
	std::cout << *ptr1 << ' ' << value1;
}


void _05_10_PointersAndConst::Test03()
{
	int value = 5;
	const int* const ptr = &value;


	int value0 = 5;
	const int *ptr1 = &value0; // ptr1 points to a "const int", so this is a pointer to a const value.
	int *const ptr2 = &value0; // ptr2 points to an "int", so this is a const pointer to a non-const value.
	const int *const ptr3 = &value0; // ptr3 points to a "const int", so this is a const pointer to a const value.

	std::cout << *ptr<<' ' << *ptr1 << ' ' << *ptr2 << ' ' << *ptr3 << '\n';
}
