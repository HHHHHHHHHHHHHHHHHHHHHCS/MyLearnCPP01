#include "_05_11_ReferenceVariables.h"
#include <iostream>

void _05_11_ReferenceVariables::Test()
{
	//Test01();
	//Test02();
	//Test03();
	//Test04();
	//Test05();
	Test06();
	Test07();
}

void _05_11_ReferenceVariables::Test01()
{
	int x = 5;
	int& y = x;
	int& z = y;

	std::cout << x << ' ' << y << ' ' << z << std::endl;

	int value = 5;
	int& ref = value; // ref->value

	value = 6; // value = 6
	ref = 7; // value 7

	ref++; //value 8

	std::cout << ref << std::endl;

	std::cout << &value << ' ' << &ref << std::endl;
}

void _05_11_ReferenceVariables::Test02()
{
	int x = 5;
	int& ref1 = x;


	const int y = 7;
	//int& ref2 = y; // error : 指向const

	//int& ref3 = 6; // error : 指向固定值

	std::cout << ref1 << std::endl;
}


void _05_11_ReferenceVariables::Test03()
{
	int value1 = 5;
	int value2 = 6;

	int& ref = value1; // ref->val1
	ref = value2; // val 的value = value2 但是 地址没有被改变
}

void _05_11_ReferenceVariables::Test04()
{
	int x = 5;
	Test04_ChangeN(x);
	//Test04_ChangeN(6);//error:6是固定地址
	std::cout << x << std::endl;
}

void _05_11_ReferenceVariables::Test04_ChangeN(int& ref)
{
	ref *= ref;
}

void _05_11_ReferenceVariables::Test05()
{
	int arr[]{99, 20, 14, 80, 95, 50};
	Test05_PrintElements_Right(arr);
	Test05_PrintElements_Error(arr);
}

//这里传入的是实际数据的长度
void _05_11_ReferenceVariables::Test05_PrintElements_Right(int (&arr)[6])
{
	int length{sizeof(arr) / sizeof(arr[0])};

	for (int i{0}; i < length; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
	std::cout << '\n';
}

//错误这时候传入的是 地址 所以长度为8   8/4 所以只有两个长度
void _05_11_ReferenceVariables::Test05_PrintElements_Error(int arr[])
{
	int length{sizeof(arr) / sizeof(arr[0])};

	for (int i{0}; i < length; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
	std::cout << '\n';
}


void _05_11_ReferenceVariables::Test06()
{
	Other other;

	int& ref = other.something.value1;


	other.something.value1 = 5;
	std::cout << other.something.value1 << ' ' << ref << std::endl;
	ref = 6;
	std::cout << other.something.value1 << ' ' << ref << std::endl;
}

void _05_11_ReferenceVariables::Test07()
{
	//这时候这两个效果差不多
	int value = 5;
	int* const ptr = &value;
	int& ref = value;

	* ptr = 5;
	ref = 5;

}
